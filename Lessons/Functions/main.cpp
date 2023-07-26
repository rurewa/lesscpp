// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Функция с счётчиком
// Вычисление суммы натуральных чисел
// Functions natSum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// 5 1+2+3+4+5 = 15

int sumTo(int a) {
    int total = 0;
    for (int count = 1; count <= a; ++count) {
        total += count;
    }
    return total;
}

int main() {
    int sum = sumTo(3); // 1+2+3
    cout << sum << endl;
    return 0;
}
// ДЗ. Сделать эту программу интерактивной.
// Output
/*
15
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
