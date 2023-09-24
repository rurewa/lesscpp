// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Выбор цвета с счётчиком
// countColorChoice.cpp IFELSE
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
    static int r_counter = 0, g_counter = 0, y_counter = 0, b_counter = 0;
    if (userChoice == 0) {
        puts(RED);
        ++r_counter;
        main();
    }
    else if (userChoice == 1) {
        puts(GREEN);
        ++g_counter;
        main();
    }
    else if (userChoice == 2) {
        puts(YELLOW);
        ++y_counter;
        main();
    }
    else if (userChoice == 3) {
        puts(BLUE);
        ++b_counter;
        main();
    }
    else if (userChoice == -1) {
        cout << "Красный: " << r_counter << " Зелёный: " << g_counter
             << " Желтый: " << y_counter << " Синий: " << b_counter << endl;
        return 0;
    }
    else {
        puts("Неизвестный цвет!");
        main();
    }
    return 0;
}
// ДЗ. Дописать программу, введя в неё пурпурный, голубой и белый цвет
// Output:
/*
Нужно выбрать цвет:красный 0, зелёный 1, желтый 2, синий 3
4
Неизвестный цвет!
Нужно выбрать цвет:красный 0, зелёный 1, желтый 2, синий 3
-1
Красный: 2 Зелёный: 2 Желтый: 1 Синий: 1
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
