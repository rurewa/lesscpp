// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum. Моя тренировка
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

enum Colors {
    COLORS_WHITE,
    COLORS_RED,
    COLORS_GREEN,
    COLORS_BLUE,
    COLORS_BROWN,
    COLORS_ORANGE,
};

int main() {
    cout << "Choose a colors: \n white\t - 0,\n red\t - 1,\n green\t - 2,\n blue\t - 3,\n brown\t - 4,\n orange\t - 5\n";
    cout << "Enter you num: \n";
    int userNumColor{0};
    cin >> userNumColor;
    cin.ignore(32767, '\n');
    Colors color = static_cast<Colors>(userNumColor);
    switch (color)
    {
    case 0:
        cout << "White\n";
        break;
    case 1:
        cout << "Red\n";
        break;
    case 2:
        cout << "Green\n";
        break;
    case 3:
        cout << "Blue\n";
        break;
    case 4:
        cout << "Brown\n";
        break;
    case 5:
        cout << "Orange\n";
        break;
    default:
        cout << "No color!\n"; // Обработка исключения
        break;
    }
    return 0;
}

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