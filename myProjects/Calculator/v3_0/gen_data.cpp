#include <array>
#include <cstdlib>
#include <iostream>
#include <fstream>

const auto ops = std::array<const char*, 4> { " + ", " - ", " * ", " / " };

int getNumber()
{
    const int i = rand();
    return i == 0
        ? 1
        : i;
}

const char* getOp()
{
    return ops[rand() % 4];
}

int main()
{
    const char* outFileName = "test.dat";
    std::ofstream file (outFileName);
    if (!file)
    {
        std::cerr << "Can't open " << outFileName << '\n';
        return 1;
    }

    const size_t exprNum = 50000;
    const size_t opsNum = 250;

    for (size_t i = 0; i < exprNum; ++i)
    {
        file << getNumber();
        for (size_t j = 0; j < opsNum; ++j)
        {
            file << getOp() << getNumber();
        }
        file << '\n';
    }

    return 0;
}
