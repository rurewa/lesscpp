// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Выбор цвета по рандому
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
    srand(time(0)); // Инициализация генератора
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    int min = 0, max = 3;
    int secret = (int)(rand() * FRACTION * (max - min + 1) + min);
    puts("Нужно выбрать цвет:красный 0, зелёный 1, желтый 2, синий 3");
    if (secret == 0) {
        puts(RED);
    }
    else if (secret == 1) {
        puts(GREEN);
    }
    else if (secret == 2) {
        puts(YELLOW);
    }
    else if (secret == 3) {
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
цвет
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
