// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// ifInputEnum.cpp /Enum
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
Перечисления - это множество целочисленных констант
Все перечислители enum находятся в едином пространстве имён
*/

enum {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN
};

enum Animal { dog, cat, bird, human };

int main() {
    cout << YELLOW << WHITE << ORANGE << GREEN << '\n';
    cout << "Enter your num: ";
    int userInput = 0;
    cin >> ws >> userInput;
    if (userInput == YELLOW) {
        cout << "YELLOW\n";
    }
    else if (userInput == WHITE) {
        cout << "WHITE\n";
    }
    else if (userInput == ORANGE) {
        cout << "ORANGE\n";
    }
    else if (userInput == GREEN) {
        cout << "GREEN\n";
    }
    else {
        cout << "?\n";
    }
    return 0;
}
/* Output:
Нужно выбрать цвет:
 желтый  - 0,
 белый   - 1,
 оранжевый       - 2,
 зелёный         - 3
Введите ваше число:
4
Что?
*/
// Задание
/* Сделать тоже самое, но с switch case */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
