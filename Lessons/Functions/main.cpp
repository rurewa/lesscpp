// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Функция перевода числа из десятичного в двоичное
// convDecToBin.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// 128, 64, 32, 16, 8, 4, 2, 1

int decToBin(int x, int pow) {
    /*
    x - десятичное число, введённое пользователем
    pow - это число множитель 2 (например, 128, 64, 32 и т.д.)
    */
    if (x >= pow) { cout << '1'; }
    // Проверяем, если х больше определённого числа, умноженного на 2
    else { cout << '0'; }
    // Если х больше, чем число, умноженное на 2, то вычитаем
    if (x >= pow) { return x - pow; }
    else { return x; }
}

int main() {
    cout << "Введите натуральное число от 0 до 255: ";
    int x = 0;
    cin >> ws >> x;
    x = decToBin(x, 128);
    x = decToBin(x, 64);
    x = decToBin(x, 32);
    x = decToBin(x, 16);
    x = decToBin(x, 8);
    x = decToBin(x, 4);
    x = decToBin(x, 2);
    x = decToBin(x, 1);
    return 0;
}
/* Output:
Введите натуральное число от 0 до 255: 4
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//