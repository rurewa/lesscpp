// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадай число!"
// guessesFuncWithCycle.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int secret();
int input();
void comparison();

int main() {
    cout << "\tУгадай моё число!\n\n";
    comparison();
    return 0;
}

int secret() {
    srand(time(0));
    return 1 + (rand() % 5);
}

int input() {
    int a = 0;
    cout << "Угадайте число!\n";
    cin >> ws >> a;
    return a;
}

void comparison() {
    int count = 0;
    while (true) {
        ++count;
        int userNum = input();
        if (userNum > secret()) {
            puts("Слишком большое!");
        }
        else if (userNum < secret()) {
            puts("Слишком маленькое!");
        }
        else {
            cout << "Угадал за " << count << " попыток!" << endl;
            exit(0);
        }
    }
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