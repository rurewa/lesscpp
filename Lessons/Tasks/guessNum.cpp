// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Напишите интерактивную программу, которая генерирует от 0 до 3
// случайное целое число и предлагает пользователю его угадать.
// guessNum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    cout << "Угадай число!\n";
    int secret = 0 + (rand() % 3);
    int userNum = 0;
    cin >> ws >> userNum;
    /* if (userNum != secret) {
        cout << "Не угадал!\n";
    }
    else {
        cout << "Угадал!\n";
    } */
    cout << (userNum != secret ? "Не угадал!" : "Угадал!") << endl;
    /* while (userNum != secret) {
        cout << "Не угадал!\n";
        exit(0);
    }
    cout << "Угадал!\n"; */
    return 0;
}
// Output:
/*
Угадай число!
1
Угадали!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//