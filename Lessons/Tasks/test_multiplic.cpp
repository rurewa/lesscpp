// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая программа для запоминания таблицы умножения.
// testMultiplic.cpp Rand
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    cout << boolalpha;
    char userSelection = 'y'; // Для продолжения или выхода из программы
    int userAnswer = 0;       // Для ввода ответа пользователем
    int check = 0;            // Для сравнения
    bool result = false;      // Для вывода результата
    short secret1 = 0, secret2 = 0;

    cout << "Проверка знаний таблицы умножения" << endl;
    while (userSelection != 'n') {
        secret1 = 1 + (rand() % 10);
        secret2 = 1 + (rand() % 10);
        cout << secret1 << 'x' << secret2 << '?' << endl;
        check = secret1 * secret2;
        cin >> userAnswer;
        /* if (userAnswer == check) {
            cout << "Правильно!" << endl;
        }
        else {
            cout << "Не правильно!" << endl;
        } */
        result = userAnswer == check ? true : false;
        cout << result << endl;
        cout << "Желаете продолжить? [y/n]: ";
        cin >> userSelection;
    }
    return 0;
}
// Output
/*
4x1?
4
true
Желаете продолжить? [y/n]: n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
