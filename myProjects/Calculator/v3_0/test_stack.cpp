#include <cassert>
#include <iostream>
#include <thread>

#include "lock_free_stack.h"

void test_simple()
{
    LockFreeStack<int> s;
    bool ok = true;
    int val = 0;
    assert(s.pop(val) == false);
    s.push(5);
    assert(s.pop(val) == true);
    assert(val == 5);
    assert(s.pop(val) == false);
    s.push(7);
    s.push(3);
    assert(s.pop(val) == true);
    assert(val == 3);
    assert(s.pop(val) == true);
    assert(val == 7);
    assert(s.pop(val) == false);
}

int main()
{
    LockFreeStack<size_t> s;
    std::thread w1([&s]()
    {
        for (size_t i = 0; i < 10000; ++i)
            s.push(i);
    });
    std::thread w2([&s]()
    {
        for (size_t i = 0; i < 10000; ++i)
            s.push(i);
    });
    std::atomic<size_t> res = 0;
    std::thread r1([&]()
    {
        size_t local = 0;
        for (size_t i = 0; i < 10000; ++i)
        {
            size_t j;
            if (s.pop(j))
                local += j;
        }
        res += local;
    });
    std::thread r2([&]()
    {
        size_t local = 0;
        for (size_t i = 0; i < 10000; ++i)
        {
            size_t j;
            if (s.pop(j))
                local += j;
        }
        res += local;
    });
    std::thread r3([&]()
    {
        size_t local = 0;
        for (size_t i = 0; i < 10000; ++i)
        {
            size_t j;
            if (s.pop(j))
                local += j;
        }
        res += local;
    });
    std::thread r4([&]()
    {
        size_t local = 0;
        for (size_t i = 0; i < 10000; ++i)
        {
            size_t j;
            if (s.pop(j))
                local += j;
        }
        res += local;
    });
    w1.join();
    w2.join();
    std::thread r5([&]()
    {
        size_t local = 0;
        for (size_t i = 0; i < 10000; ++i)
        {
            size_t j;
            if (s.pop(j))
                local += j;
        }
        res += local;
    });
    r1.join();
    r2.join();
    r3.join();
    r4.join();
    r5.join();
    size_t sum = 0;
    for (size_t i = 0; i < 10000; ++i)
        sum += i;
    sum *= 2;
    std::cout << res << ' ' << sum << std::endl;
    assert(res == sum);
    return 0;
}
