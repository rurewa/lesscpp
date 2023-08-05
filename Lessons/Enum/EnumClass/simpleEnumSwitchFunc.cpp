// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример связки перечисления с функцией.
// enumFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

enum class Animals {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH
};

string getAnimalName(Animals animal) {
    switch (animal)
    {
    case Animals::PIG:
        return "Свинья";
        break;
    case Animals::CHICKEN:
        return "Курица";
        break;
    case Animals::GOAT:
        return "Коза";
        break;
    case Animals::CAT:
        return "Кошка";
        break;
    case Animals::DOG:
        return "Собака";
        break;
    case Animals::OSTRICH:
        return "Страус";
        break;
    default:
        return "Что?";
        break;
    }
}

void printNumberLegs(Animals legs) {
    cout << getAnimalName(legs) << " имеет ";
    switch (legs)
    {
    case Animals::OSTRICH:
    case Animals::CHICKEN:
        cout << '2';
        break;

    case Animals::PIG:
    case Animals::GOAT:
    case Animals::CAT:
    case Animals::DOG:
        cout << '4';
        break;
    default:
        cout << "Что?";
        break;
    }
    cout << " Ноги. \n";
}

int main() {
    printNumberLegs(Animals::CHICKEN);
    printNumberLegs(Animals::CAT);
    return 0;
}
// Output:
/*
Курица имеет 2 Ноги.
Кошка имеет 4 Ноги.
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//