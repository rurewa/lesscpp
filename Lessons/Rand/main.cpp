// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадай число!". Программа не доделана - не работает цикл
// guessesFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int secret() {
    srand(time(0));
    return 1 + (rand() % 5);
}

int input() {
    int a = 0;
    cout << "Угадайте число!\n";
    cin >> a;
    return a;
}

void comparison(int a, int b) {
    if (a > b) {
        puts("Слишком большое!");
    }
    else if (a < b) {
        puts("Слишком маленькое!");
    }
    else {
        puts("Угадал!");
    }
}

int main() {
    int userNum = input(), secretNum = secret();
    do {
        comparison(userNum, secretNum);
        break;
    } while( userNum != secretNum);
    //cout << "Количество попыток: " << ++count;
    return 0;
}


// Output:
/*
Угадайте число!
2
Угадал!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//