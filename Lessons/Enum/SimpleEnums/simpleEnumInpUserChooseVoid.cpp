// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты по void для доступа к элементам перечислений enum по выбору
// пользователя
// V 1.1
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

enum Colors {
  COLOR_RED, // Присваивается 0
  COLOR_BROWN, // Присваивается 1
  COLOR_GRAY, // Присваивается 2
  COLOR_WHITE, // Присваивается 3
  COLOR_PINK, // Присваивается 4
  COLOR_ORANGE, // Присваивается 5
  COLOR_BLUE, // Присваивается 6
  COLOR_PURPLE, // Присваивается 7
};

void printColor(Colors color) {
    using namespace std;
    if (color == COLOR_RED) {
        cout << "Red" << endl;
    }
    else if (color == COLOR_BROWN) {
        cout << "Brown" << endl;
    }
    else if (color == COLOR_GRAY) {
        cout << "Gray" << endl;
    }
    else if (color == COLOR_WHITE) {
        cout << "White" << endl;
    }
    else if (color == COLOR_PINK) {
        cout << "Pink" << endl;
    }
    else if (color == COLOR_ORANGE) {
        cout << "Orange" << endl;
    }
    else if (color == COLOR_BLUE) {
        cout << "Blue" << endl;
    }
    else if (color == COLOR_PURPLE) {
        cout << "Purple" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }
}

int userInput() {
    using namespace std;
    cout << "Choose a colors: \n red\t - 0,\n brown\t - 1,\n gray\t - 2,\n white\t - 3,\n pink\t - 4,\n orange\t - 5,\n blue\t - 6,\n purple\t - 7,\n";
    cout << "Enter num: " << endl;
    int userNum;
    cin >> userNum;
    return userNum;
}

int main() {
    int userInputNum = userInput();
    Colors color(static_cast<Colors>(userInputNum));
    printColor(color);

    return 0;
}
/* Output:
Choose a colors:
 red     - 0,
 brown   - 1,
 gray    - 2,
 white   - 3,
 pink    - 4,
 orange  - 5,
 blue    - 6,
 purple  - 7,
Enter num:
2
Gray
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//