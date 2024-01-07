// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадайка" с циклом с постусловием
// guessNum.cpp DoWhile
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    short guess = 5;
    puts("Угадай цифру!");
    char again = 'y';
    do {
        puts("Введите своё число");
        short getUserNum{0};
        cin >> getUserNum;
        while (guess != getUserNum) {
            puts("Try again!");
            break;
        }
        while (guess == getUserNum) {
            puts("Excelent!");
            break;
        }
        puts("Enter Y for continue or N for exit");
        cin >> again;
    } while (again != 'n');
    return 0;
}
//
// Output:
/*
Угадал!
Enter Y for continue or N for exit
n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//