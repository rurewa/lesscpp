// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример чистой функции.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>

const int x{2}, y{5};

int foo(int a, int b) {
    int result{1}, i{};
    for (i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}

int main() {
    int z = foo(x, y);
    std::cout << z << std::endl;

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//