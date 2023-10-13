// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример двулапоходящих животных.
// twoAndFourPaws.cpp Functions
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Animal { PIG, CHICKEN, GOAT, CAT, DOG, OSTRICH }; // в перечислениях всё начинается от 0
//enum class Animal { PIG, CHICKEN, GOAT, CAT, DOG, OSTRICH, KANGAROO };

int main() {
    int choice = 0;
    cout << "Введите животное\n";
    cin >> choice;
    Animal vs = (Animal)choice;
    switch (vs) {
    case Animal::PIG:
        puts("Свинья");
        break;
    case Animal::CHICKEN:
        puts("Курица");
        break;
    case Animal::GOAT:
        puts("Коза");
        break;
    case Animal::CAT:
        puts("Кошка");
        break;
    case Animal::DOG:
        puts("Собака");
        break;
    case Animal::OSTRICH:
        puts("Страус");
        break;
    /* case Animal::KANGAROO:
        puts("Кенгуру");
        break; */
    default:
        puts("Что?");
        break;
    }
    Animal paws = vs;
    switch (paws) {
    case Animal::OSTRICH:
    case Animal::CHICKEN:
    //case Animal::KANGAROO:
        cout << "на " << 2;
        break;
    case Animal::CAT:
    case Animal::DOG:
    case Animal::GOAT:
    case Animal::PIG:
        cout << "на " << 4;
        break;
    default:
        puts("Что?");
        break;
    }
    cout << " лапах\n";
    return 0;
}
// Д.З. Добавить в эту программу Кенгуру
/* Output:
Курица имеет 2 Лапы
Кошка имеет 4 Лапы
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//