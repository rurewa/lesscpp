// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые примеры использования тернарного оператора вместо if/else
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

int min(int a, int b) {
    return (a < b) ? a : b; // Использование тернарного оператора
}

int main() {
    // С функцией
    std::cout << "Minimal number: " << min(3, 5) << std::endl;
    // Без функции
    int x{ 3 }, y{ 5 };
    std::cout << ((x < y) ? x : y) << std::endl;
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//