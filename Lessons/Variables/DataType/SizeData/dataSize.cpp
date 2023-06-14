// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Размеры типов данных в байтах и числах
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// types.cpp

int main() {
    cout << "Типы данных\n";
    // short - маленький целочисленный тип
    // int - средний целочисленный тип
    // long - большой целочисленный тип
    // 0 1 2 35 66 100
    /* cout << "Целочисленные типы:\n";
    cout << "Тип short: \t" << sizeof(short) << " байта" << '\n';
    cout << "Тип int: \t" << sizeof(int) << " байта" << '\n';
    cout << "Тип long: \t" << sizeof(long) << " байта\n";
    cout << "Тип long long: \t" << sizeof(long long) << " байта\n";
    cout << "\nВещественные типы:\n";
    cout << "Тип float: \t" << sizeof(float) << " байта" << '\n';
    cout << "Тип double: \t" << sizeof(double) << " байта" << '\n';
    cout << "Тип long double: " << sizeof(long double) << " байта" << '\n';
    cout << "\nСимвольный тип:\n";
    cout << "Тип char: \t" << sizeof(char) << " байта" << '\n';
    cout << "\nСтрока:\n";
    cout << "Тип string: \t" << sizeof(string) << " байта" << '\n'; */
    cout << "Целочисленные типы:\n";
    cout << "Тип short: \t" << sizeof(short) << " байта" << " -32'768 до 32'767\n";
    cout << "Тип int: \t" << sizeof(int) << " байта" << " -2'147'483'648 до 2'147'483'647\n";
    cout << "Тип long: \t" << sizeof(long) << " байта" << " -9'223'372'036'854'775'808 до 9'223'372'036'854'775'807\n";
    cout << "Тип long long: \t" << sizeof(long long) << " байта\n";
    cout << "\nВещественные типы:\n";
    cout << "Тип float: \t" << sizeof(float) << " байта" << '\n';
    cout << "Тип double: \t" << sizeof(double) << " байта" << '\n';
    cout << "Тип long double: " << sizeof(long double) << " байта" << '\n';
    cout << "\nСимвольный тип:\n";
    cout << "Тип char: \t" << sizeof(char) << " байта" << '\n';
    cout << "\nСтрока:\n";
    cout << "Тип string: \t" << sizeof(string) << " байта" << '\n';
    return 0;
}
// OUTPUT
/*
Типы данных
Целочисленные типы:
Тип short:      2 байта -32'768 до 32'767
Тип int:        4 байта -2'147'483'648 до 2'147'483'647
Тип long:       8 байта -9'223'372'036'854'775'808 до 9'223'372'036'854'775'807
Тип long long:  8 байта

Вещественные типы:
Тип float:      4 байта
Тип double:     8 байта
Тип long double: 16 байта

Символьный тип:
Тип char:       1 байта

Строка:
Тип string:     32 байта
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//