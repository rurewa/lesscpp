// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// 
// colorChoice.cpp IFELSE
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

//int counter = 0; // Глобальные переменные - это зло!
const auto RED = "\e[43;31m    \e[0m";

int main() {
    puts("Нужно выбрать цвет:красный 0, зелёный 1, желтый 2, синий 3");
    cout << RED << endl;
    return 0;
}
// ДЗ.
// Output:
/*
Введите ваш возраст
2
Вам ещё рано получать паспорт!
Введите ваш возраст
3
Вам ещё рано получать паспорт!
Введите ваш возраст
4
Вам ещё рано получать паспорт!
Введите ваш возраст
18
Можно! Неудачных попыток: 3
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
