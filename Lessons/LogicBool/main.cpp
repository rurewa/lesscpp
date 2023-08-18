// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример использования логических значений для сервера.
// При каких условиях сервер будет исправен?
// overHeatServer.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    // Сервер работает при условии работы кондиционера И кулера
    cout << boolalpha;
    const bool A = true; // Во время работы сервер нагревается
    bool b; // Кондиционирование
    bool c; // Кулер процессора
    bool d; // Исправность сервера
    cout << "Указываем 1 (да), 0 (нет) для ввода данных" << endl;
    cout << "Работает ли кондиционер? ";
    cin >> b;
    cout << "Работает ли кулер процессора? ";
    cin >> c;
    d = A && (b || c);
    cout << "Исправность сервера: " << d << endl;
    /*
    111 = true
    110 = true
    101 = true
    100 = false
    */
    return 0;
}
// Output:
/*
Указываем 1 (да), 0 (нет) для ввода данных
Работает ли кондиционер? 0
Работает ли кулер процессора? 0
Исправность сервера: false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//