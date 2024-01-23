// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Enum class и for + color
// classEnumForColors.cpp EnumsClass
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Colors { RED, WHITE, YELLOW, BLUE, MAGENTA, CYAN };

int main() {
    /* for (Colors col = Colors::RED; col <= Colors::CYAN; ++(int&)col) { cout << (int)col << ' '; }
    cout << endl; */
    for (Colors col = Colors::RED; col <= Colors::CYAN; ++(int&)col) {
        cout << (int)col << ' ';
        switch (col)
        {
        case Colors(0): // Colors::RED
            puts("\e[0;41m            \e[0m");
            break;
        case Colors(1):
            puts("\e[0;47m            \e[0m");
            break;
        case Colors(2):
            puts("\e[0;43m            \e[0m");
            break;
        case Colors(3):
            puts("\e[0;44m            \e[0m");
            break;
        case Colors(4):
            puts("\e[0;45m            \e[0m");
            break;
        case Colors(5):
            puts("\e[0;46m            \e[0m");
            break;
        default:
            puts("What?");
            break;
        }
    }
}
// Задание
/*
На основе этой программы сделать новую, которая выведет эти цвета в строку, а не в столбик
 */
/* Output:
0 1 2 3 4 5
0
1
2
3
4
5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//