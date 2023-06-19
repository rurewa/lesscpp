// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Доступ к элементам перечислений enum class по выбору пользователя Switch
// switchColors.cpp EnumClass
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
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

enum class Colors { RED, WHITE, YELLOW, BLUE, MAGENTA, CYAN };

int main() {
    cout << "Выбрать цвет red - 0, white - 1, yellow - 2, blue - 3, magenta - 4, cyan - 5\n";
    int userInput = 0;
    cin >> ws >> userInput;
    Colors color = static_cast<Colors>(userInput);
    cout << "С помощью Switch case\n";
    switch (color)
    {
        case Colors::RED:
            puts("\e[0;41m            \e[0m\n");
            break;
        case Colors::WHITE:
            puts("\e[0;47m            \e[0m\n");
            break;
        case Colors::YELLOW:
            puts("\e0;43m            \e[0m\n");
            break;
        case Colors::BLUE:
            puts("\e[0;44m            \e[0m\n");
            break;
        case Colors::MAGENTA:
            puts("\e[0;45m            \e[0m\n");
            break;
        case Colors::CYAN:
            puts("\e[0;46m            \e[0m\n");
            break;
        default:
            puts("?");
            break;
    }
    cout << "С помощью if\n";
    if (color == Colors::RED) {
        puts("\e[0;41m            \e[0m\n");
    }
    else if (color == Colors::WHITE) {
        puts("\e[0;47m            \e[0m\n");
    }
    else if (color == Colors::YELLOW) {
        puts("\e0;43m            \e[0m\n");
    }
    else if (color == Colors::BLUE) {
        puts("\e[0;44m            \e[0m\n");
    }
    else if (color == Colors::MAGENTA) {
        puts("\e[0;45m            \e[0m\n");
    }
    else if (color == Colors::CYAN) {
        puts("\e[0;46m            \e[0m\n");
    }
    else {
        puts("?");
    }
    return 0;
}
/* Output:
Выбрать цвет red - 0, white - 1, yellow - 2, blue - 3, magenta - 4, cyan - 5
5
С помощью Switch case


С помощью if

*/
// Задание
/*
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//