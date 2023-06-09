#include <atomic>
#include <condition_variable>
#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <queue>
#include <mutex>
#include <vector>

#include "calc.h"
#include "lock_free_stack.h"

class Calculator
{
    std::queue<std::string> expressions_;
    std::mutex mutex_;
    std::vector<std::thread> workers_;
    std::atomic<bool> keepWorking_;
    std::condition_variable hasExpr_;
    std::mutex outMutex_;
public:
    explicit Calculator(size_t threadsNum)
        : keepWorking_(true)
    {
        for (size_t i = 0; i < threadsNum; ++i)
        {
            workers_.emplace_back(
                [this]()
                {
                    while (keepWorking_)
                    {
                        std::unique_lock<std::mutex> lock(mutex_);
                        while (expressions_.empty())
                        {
                            hasExpr_.wait(lock);
                            if (!keepWorking_)
                            {
                                return;
                            }
                        }
                        const std::string expr = expressions_.front();
                        expressions_.pop();
                        lock.unlock();

                        const int res = ::calc(expr.c_str());

                        std::lock_guard<std::mutex> outLock(outMutex_);
                        std::cout << res << std::endl;
                    }
                });
        }
    }

    ~Calculator()
    {
        keepWorking_ = false;
        hasExpr_.notify_all();
        for (auto& w : workers_)
        {
            w.join();
        }
    }

    void calc(std::string&& expr)
    {
        {
            std::lock_guard<std::mutex> lock(mutex_);
            expressions_.push(std::move(expr));
        }
        hasExpr_.notify_one();
    }
};

class LockFreeCalculator
{
    LockFreeStack<std::string> expressions_;
    std::vector<std::thread> workers_;
    std::atomic<bool> keepWorking_;
    std::mutex outMutex_;
public:
    explicit LockFreeCalculator(size_t threadsNum)
        : keepWorking_(true)
    {
        for (size_t i = 0; i < threadsNum; ++i)
        {
            workers_.emplace_back(
                [this]()
                {
                    while (keepWorking_)
                    {
                        std::string expr;
                        while (keepWorking_ && !expressions_.pop(expr)) ;

                        const int res = ::calc(expr.c_str());

                        std::lock_guard<std::mutex> outLock(outMutex_);
                        std::cout << res << std::endl;
                    }
                });
        }
    }

    ~LockFreeCalculator()
    {
        keepWorking_ = false;
        for (auto& w : workers_)
        {
            w.join();
        }
    }

    void calc(std::string&& expr)
    {
        expressions_.push(std::move(expr));
    }
};

int main()
{
    const char* inFileName = "test.dat";
    std::ifstream file(inFileName);
    if (!file)
    {
        std::cerr << "Can't open " << inFileName << '\n';
        return 1;
    }

    LockFreeCalculator c(3);

    std::string expr;
    while (std::getline(file, expr))
    {
        c.calc(std::move(expr));
    }

    return 0;
}
