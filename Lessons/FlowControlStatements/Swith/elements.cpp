// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, определяющаяя название химического элемента
// elements.cpp SwitchCase
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    puts("Введите количество протонов");
    int userChoice = 0;
    cin >> ws >> userChoice;
    switch (userChoice) {
    case 1:
        puts("Это водород");
        break;
    case 2:
        puts("Это Гелий");
        break;
    case 3:
        puts("Это Литий");
        break;
    default:
        puts("Это что-то другое");
        break;
    }
    return 0;
}
// Output:
/*
Введите количество протонов
2
Это Гелий
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
