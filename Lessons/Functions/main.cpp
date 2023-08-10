// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Интерактивный пример связки перечисления с функциями.
// eFunc.cpp Functions
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Colors {
    RED, BROWN, GRAY, WHITE, PINK, BLUE, PURPLE
};

// Прототипы функций
void printColor(Colors color);
int userInput();

int main() {
    cout << "Введите номер цвета\n";
    int userInputNum = userInput();
    Colors color (static_cast<Colors>(userInputNum));
    printColor(color);
    return 0;
}

void printColor(Colors color) {
    if (color == Colors::RED) {
        puts("Red");
    }
    else if (color == Colors::BROWN) {
        puts("Brown");
    }
    else if (color == Colors::GRAY) {
        puts("Gray");
    }
    else if (color == Colors::WHITE) {
        puts("White");
    }
    else if (color == Colors::PINK) {
        puts("Pink");
    }
    else if (color == Colors::BLUE) {
        puts("Blue");
    }
    else if (color == Colors::PURPLE) {
        puts("Purple");
    }
    else {
        puts("Что?");
    }
}

int userInput() {
    int userNum;
    cin >> userNum;
    return userNum;
}

/* Output:
Введите номер цвета
10
Что?
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//