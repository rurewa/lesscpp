// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// switchUserInputEnum.cpp Enums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN
};

int main() {
    cout << "Нужно выбрать цвет:\n желтый\t - 0,\n белый\t - 1,\n оранжевый\t - 2,\n зелёный\t - 3\n";
    cout << "Введите ваше число:\n";
    int userInput;
    cin >> userInput;
    //Colors color = static_cast<Colors>(userInput);
    Colors color = (Colors)(userInput);
    switch (color)
    {
    case Colors::YELLOW:
        cout << "Желтый\n";
        break;
    case Colors::WHITE:
        cout << "Белый\n";
        break;
    case Colors::ORANGE:
        cout << "Оранжевый\n";
    break;
    case Colors::GREEN:
        cout << "Зелёный\n";
        break;
    default:
        cout << "Что?\n";
        break;
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
