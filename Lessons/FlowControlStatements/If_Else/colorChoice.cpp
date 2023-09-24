// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Выбор цвета
// colorChoice.cpp IFELSE
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

const auto RED = "\e[41m    \e[0m";
const auto GREEN = "\e[42m    \e[0m";
const auto YELLOW = "\e[43m    \e[0m";
const auto BLUE = "\e[44m    \e[0m";

int main() {
    puts("Нужно выбрать цвет:красный 0, зелёный 1, желтый 2, синий 3");
    int userChoice = 0;
    cin >> ws >> userChoice;
    if (userChoice == 0) {
        puts(RED);
    }
    else if (userChoice == 1) {
        puts(GREEN);
    }
    else if (userChoice == 2) {
        puts(YELLOW);
    }
    else if (userChoice == 3) {
        puts(BLUE);
    }
    else {
        puts("Неизвестный цвет!");
    }
    return 0;
}
// ДЗ. Дописать программу, введя в неё пурпурный, голубой и белый цвет
// Output:
/*
Нужно выбрать цвет:красный 0, зелёный 1, желтый 2, синий 3
4
Неизвестный цвет
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
