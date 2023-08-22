// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа с функциями для запоминания таблицы умножения
// testMultiplic.cpp Rand
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int randNum() {
    srand(time(0));
    return 1 + (rand() % 10);
}

bool comparison(int a, int b) {
    cout << boolalpha;
    return a == b ? true : false;
}

int calculate(int a, int b) {
    return a * b;
}

int main() {
    char userSelection = 'y'; // Для продолжения или выхода из программы
    int userAnswer = 0;       // Для ввода ответа пользователемs
    short secret1 = 0, secret2 = 0;
    while (userSelection != 'n') {
        secret1 = randNum();
        secret2 = randNum();
        cout << secret1 << 'x' << secret2 << '?' << endl;
        cin >> ws >> userAnswer;
        cout << comparison(userAnswer, calculate(secret1, secret2)) << endl;
        cout << "Желаете продолжить? [y/n]: ";
        cin >> ws >> userSelection;
    }
    return 0;
}
// Output
/*
7x7?
49
true
Желаете продолжить? [y/n]: y
4x4?
16
true
Желаете продолжить? [y/n]: n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//