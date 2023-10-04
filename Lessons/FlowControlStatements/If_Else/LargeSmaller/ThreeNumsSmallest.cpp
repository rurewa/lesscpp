// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа нахождения минимального числа из 3-х. Вложенные if-ы
// К этой программе есть блок-схема
// ThreeNumsSmallest.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Программа нахождения наименьшего из 3-х чисел\n";
    cout << "Введите три числа по очереди через пробел: ";
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    int min = 0;
    if (a > b) {
        if (b > c) {
            min = c;
        } else if (c > a) {
            min = b;
        } else {
            min = b;
        }
    } else {
        if (c > b) {
            min = a;
        } else if (a > c) {
            min = c;
        } else {
            min = a;
        }
    }
    cout << "Минимальное число: " << min << endl;
    return 0;
}
// Output:
/*
Программа нахождения наименьшего из 3-х чисел
Введите три числа по очереди: 2 2 5
Минимальное число: 2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//