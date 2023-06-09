// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, выбора цвета по ANSI в терминале
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
    cout << "Укажите нужный цвет\n";
    cout << "Красный - a, Зелёный - b, Желтый - c, Синий - d, Пурпурный - i, Бирюзовый - f\n";
    char userColour;
    cin >> userColour;
    switch (userColour)
    {
        case 'a':
            cout << COLOR_RED       << "TEXT" << endl;
            break;
        case 'b':
            cout << COLOR_GREEN     << "TEXT" << endl;
            break;
        case 'c':
            cout << COLOR_YELLOW    << "TEXT" << endl;
            break;
        case 'd':
            cout << COLOR_BLUE      << "TEXT" << endl;
            break;
        case 'i':
            cout << COLOR_MAGENTA   << "TEXT" << endl;
            break;
        case 'f':
            cout << COLOR_CYAN      << "TEXT" << endl;
            break;
        default:
             cout << "Вы не выбрали цвет!\n";
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