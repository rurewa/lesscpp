// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, выбора цвета по ANSI в терминале
// colors.cpp SwitchCase
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;
/*
          foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47
*/

const auto COLOR_RED       = "\033[31m";
const auto COLOR_GREEN     = "\033[32m";
const auto COLOR_YELLOW    = "\033[33m";
const auto COLOR_BLUE      = "\033[34m";
const auto COLOR_MAGENTA   = "\033[35m"; // Пурпурный
const auto COLOR_CYAN      = "\033[36m"; // Бирюзовый

int main() {
    puts("Укажите нужный цвет: красный - r, зелёный - g, желтый - y");
    char userColour;
    cin >> ws >> userColour;
    switch (userColour)
    {
    case 'r':
        cout << COLOR_RED << "TEXT\e[0m\n";
        break;
    case 'g':
        cout << COLOR_GREEN << "TEXT\e[0m\n";
        break;
    case 'y':
        cout << COLOR_YELLOW << "TEXT\e[0m\n";
        break;
    default:
        puts("Вы не выбрали цвет!");
        break;
    }
    return 0;
}
// Output:
/*
Укажите нужный цвет
Красный - a, Зелёный - b, Желтый - c, Синий - d, Пурпурный - i, Бирюзовый - f
c
TEXT
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//