// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Доступ к элементам перечислений enum class по выбору пользователя
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

enum class Colors {
    RED, // 0
    WHITE, // 1
    YELLOW, // 2
    BLUE, // 3
    MAGENTA, // 4
    CYAN // 5
};

int main() {
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    Colors color = static_cast<Colors>(userNum);
    if (color == Colors::RED)   {
        cout << "\e[0;41m            \e[0m\n";
    }
    else if (color == Colors::WHITE) {
        cout << "\e[0;47m            \e[0m\n";
    }
    else if (color == Colors::YELLOW) {
        cout << "\e[0;43m            \e[0m\n\n";
    }
    else if (color == Colors::MAGENTA) {
        cout << "\e[0;45m            \e[0m\n";
    }
    else if (color == Colors::BLUE) {
        cout << "\e[0;44m            \e[0m\n";
    }
    else if (color == Colors::CYAN) {
        cout << "\e[0;46m            \e[0m\n";
    }
    else {
        cout << "Unknown!\n";
    }
  return 0;
}
/* Output:
Enter num:
3
*/
// Задание
/* Сделать тоже самое, только при помощи Swich case*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//