// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример связки перечисления с функцией.
// enumFunc.cpp Functions
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Animal {
    PIG, CHICKEN, GOAT, CAT, DOG, OSTRICH
};

string getAnimalName(Animal animal) {
    switch (animal)
    {
    case Animal::PIG:
        return "Свинья";
        break;
    case Animal::CHICKEN:
        return "Курица";
        break;
    case Animal::GOAT:
        return "Коза";
        break;
    case Animal::CAT:
        return "Кошка";
        break;
    case Animal::DOG:
        return "Собака";
        break;
    case Animal::OSTRICH:
        return "Страус";
        break;
    default:
        return "Что?";
        break;
    }
}

void printNumberPaws(Animal paws) {
    cout << getAnimalName(paws) << " имеет ";
    switch (paws)
    {
    case Animal::OSTRICH:
    case Animal::CHICKEN:
        cout << '2';
        break;
    case Animal::CAT:
    case Animal::DOG:
    case Animal::GOAT:
    case Animal::PIG:
        cout << '4';
        break;
    default:
        cout << "Что?";
        break;
    }
    cout << " Лапы\n";
}

int main() {
    int choose = 0;
    cout << "Введите животное\n";
    cin >> choose;
    Animal vs = (Animal)choose;
    //printNumberPaws(Animal::CHICKEN);
    //printNumberPaws(Animal::CAT);
    printNumberPaws(vs);
    return 0;
}
/* Output:
Курица имеет 2 Лапы
Кошка имеет 4 Лапы
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//