// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадай число!"
// guessFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int secret();
int input();
bool comparison(int a, int b);
void printResult(bool result);

int main() {
    printResult(comparison(input(), secret()));
    return 0;
}

int secret() {
    srand(time(0));
    return 1 + (rand() % 5);
}

int input() {
    cout << "Угадай число! ";
    int a = 0;
    cin >> a;
    return a;
}

bool comparison(int a, int b) {
    return a == b ? true : false;
}

void printResult(bool result) {
    cout << boolalpha << result << endl;
}
// Output:
/*
Угадай число! 4
true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//