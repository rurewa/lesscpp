// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Цвет и перечисления.
// colors.cpp Enums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

enum Colors {
    COLOR_WHITE,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
    COLOR_MAGENTA, // Пурпурный
    COLOR_YELLOW,
};

int main() {
    cout << "Choose a color: \n white\t - 0,\n red\t - 1,\n green\t - 2,\n blue\t - 3,\n magenta\t - 4,\n yellow\t - 5\n";
    cout << "Enter your color: \n";
    int getUserNumColor{0};
    cin >> getUserNumColor;
    //Colors color = static_cast<Colors>(getUserNumColor);
    Colors color = (Colors)(getUserNumColor);
    switch (color)
    {
    case Colors::COLOR_WHITE: // Сначала 0, потом COLOR_WHITE, и затем Colors::COLOR_WHITE
        puts("\e[37;44mWhite\e[0m"); // Фон и шрифт
        //puts("\e[34mWhite\e[0m"); // Только шрифт
        break;
    case Colors::COLOR_RED:
        puts("Red");
        break;
    case Colors::COLOR_GREEN:
        puts("Green");
        break;
    case Colors::COLOR_BLUE:
        puts("Blue");
        break;
    case Colors::COLOR_MAGENTA:
        puts("Magenta"); // Пурпурный
        break;
    case Colors::COLOR_YELLOW:
        puts("Yellow"); // Пурпурный
        break;
    default:
        puts("No color!"); // Обработка исключения
        break;
    }
    return 0;
}
// Задание - добавить в эту программу цветной вывод. На основе этой программы сделать новую,
// только вместо switch case использовать if else, else if
/* Output:
Choose a colors:
 white   - 0,
 red     - 1,
 green   - 2,
 blue    - 3,
 brown   - 4,
 orange  - 5
Enter you num:
2
Green
*/

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//