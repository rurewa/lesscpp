// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадай цифру!". Цикл с постусловием. Вложенные циклы.
// guessNum.cpp DoWhile
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    int i = 5;
    cout << "Угадай цифру!" << endl;
    char ch = 'y';
    do {
        cout << "Введи своё число: ";
        int userNum = 0;
        cin >> userNum;
        while (i != userNum) {
            cout << "Try again!" << endl;
            break;  // Прыжок из цикла
        }
        while (i == userNum) {
            cout << "Угадал!" << endl;
            break; // Прыжок из цикла
        }
        cout << "Enter y for continue or n for exit" << endl;
        cin >> ch;
    }
    while (ch != 'n');
    return 0;
}
// Output:
/*
Угадай цифру!
Введи своё число: 3
Try again!
Enter y for continue or n for exit
y
Введи своё число: 5
Угадал!
Enter y for continue or n for exit
n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//