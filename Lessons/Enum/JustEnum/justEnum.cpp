// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// justEnum.cpp /Enum
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
Перечисления - это множество целочисленных констант
Все перечислители enum находятся в едином пространстве имён
*/

/* enum { // Эта группа никак не обозначена
    YELLOW,
    WHITE,
    ORANGE,
    GREEN
}; */

enum { DOG, CAT, BIRD, CAPYBARA }; // Без переменной перечисляемого типа

enum { ELEPHANT, HIPPO, WHALE };

//enum SmallAnimals { DOG = 10, CAT = 3, BIRD = 1, CAPYBARA = 10 }; // С переменной перечисляемого типа

//enum BigAnimals { ELEPHANT = 7000, HIPPO = 1600, WHALE = 150000}; // Вес сразу не пиши!

int main() {
    cout << "Собака " << DOG << " Кошка " << CAT << endl;
    cout << "Выберите животное - собака 0, кошка - 1, птица - 2, капибара 3\n";
    int userInput = 0;
    cin >> ws >> userInput;
    switch (userInput)
    {
    case 0:
        cout << "Собака\n";
        break;
    case 1:
        cout << "Кошка\n";
        break;
    case 2:
        cout << "Птица\n";
        break;
    case 3:
        cout << "Кабибара\n";
        break;
    default:
        cout << "Что?\n";
        break;
    }

    /* cout << YELLOW << WHITE << ORANGE << GREEN << '\n';
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
    } */
    return 0;
}
/* Output:
Собака 0 Кошка 1
Выберите животное - собака 0, кошка - 1, птица - 2, капибара 3
9
Что?
*/
// Задание
/* Сделать тоже самое, но с switch case */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
