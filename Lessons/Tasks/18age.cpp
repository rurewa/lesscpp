// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Разработать интерактивную программу, которая запрашивает возраст,
// сравнивает его 18, если меньше, то сообщает отказом, если 18 и больше — сообщает об успехе.
// 18age.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Сколько вам лет?\n";
    int age = 0;
    cin >> ws >> age;
    cout << (age < 18 ? "Вам нельзя!" : "Можно!") << endl;
    /* if (age < 18) {
        cout << "Вам нельзя!\n";
    }
    else {
        cout << "Можно!\n";
    } */
    /* while (age < 18) {
        cout << "Вам нельзя!\n";
        exit(0);
    }
    cout << "Можно!\n"; */
    /* int result = age < 18 ? 0 : 1;
    switch (result)
    {
    case 0:
        cout << "Вам нельзя!\n";
        break;
    case 1:
        cout << "Можно!\n";
        break;
    default:
        break;
    } */
    return 0;
}
// Output:
/*
Сколько вам лет?
17
Вам нельзя
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//