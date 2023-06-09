// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// V 1.1
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

enum Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN,
};

int main() {
    using namespace std;
    cout << "Choose a color:\n yellow\t - 0,\n white\t - 1,\n orange\t - 2,\n green\t - 3\n";
    cout << "Enter num: " << endl;
    int userNum;
    cin >> ws >> userNum;
    Colors color(static_cast<Colors>(userNum));
    if (color == YELLOW) {
        cout << "White" << endl;
    }
    else if (color == WHITE) {
        cout << "Yellow" << endl;
    }
    else if (color == ORANGE) {
        cout << "Orange" << endl;
    }
    else if (color == GREEN) {
        cout << "Green" << endl;
    }
    else {
        cout << "Unknown!" << endl;
    }

    return 0;
}
/* Output:
Choose a color:
 yellow  - 0,
 white   - 1,
 orange  - 2,
 green   - 3
Enter num:
1
Yellow
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
