// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пользовательский выбор фруктов
// fruitUserChoice
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;


enum class Fruit { LEMON, APPLE, CHERRY };

void printFruit(Fruit fruit) {
    switch (fruit)
    {
       case Fruit::LEMON:
           puts("🍋");
           break;
       case Fruit::APPLE:
           puts("🍏");
           break;
       case Fruit::CHERRY:
           puts("🍒");
           break;
       default:
           puts("?");
           break;
    }
}
int userChoice() {
    int inputNum = 0;
    cin >> ws >> inputNum;
    return inputNum;
}

int main() {
    cout << "Выбрать фрукт лимон - 0, яблоко - 1, вишня - 2\n";
    int userInput = userChoice();
    //Fruit fruit = static_cast<Fruit>(userInput);
    Fruit fruit = (Fruit)(userInput);
    printFruit(fruit);
    return 0;
}
/* Output:
Выбрать фрукт лимон - 0, яблоко - 1, вишня - 2
2
🍒
*/
// Задание
/*
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//