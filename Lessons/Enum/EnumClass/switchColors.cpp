// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Доступ к элементам перечислений enum class по выбору пользователя Switch
// switchColors.cpp EnumsClass
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Colors {
    RED, // 0
    WHITE, // 1
    YELLOW, // 2
    BLUE, // 3
    MAGENTA, // 4 V
    CYAN // 5 Голубой
};

int main() {
    cout << "Enter num: " << endl;
    int userNum;
    cin >> ws >> userNum;
    Colors color = static_cast<Colors>(userNum);
    switch (color)
    {
        case Colors::RED:
            cout << "\e[0;41m            \e[0m\n";
            break;
        case Colors::WHITE:
            cout << "\e[0;47m            \e[0m\n";
            break;
        case Colors::YELLOW:
            cout << "\e[0;43m            \e[0m\n\n";
            break;
        case Colors::MAGENTA:
            cout << "\e[0;45m            \e[0m\n";
            break;
        case Colors::BLUE:
            cout << "\e[0;44m            \e[0m\n";
            break;
        case Colors::CYAN:
            cout << "\e[0;46m            \e[0m\n";
            break;
        default:
            cout << "Что-то пошло не так!\n";
            break;
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
