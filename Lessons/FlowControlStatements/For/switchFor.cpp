// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример Switch case и for
// switchFor.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    puts("Меню");
    puts("1. Прямой счёт");
    puts("2. Обратный счёт");
    puts("3. Только чётные");
    puts("4. Только нечётные");
    int choise = 0;
    cin >> choise;
    switch (choise) {
    case 1:
        for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
            cout << i << ' ';
        }
        break;
    case 2:
        for (int i = 10; i >= 0; sleep(1), cout.flush(), --i) {
            cout << i << ' ';
        }
        break;
    case 3:
        for (int i = 0; i != 10; sleep(1), cout.flush(), i += 2) {
            cout << i << ' ';
        }
        break;
    case 4:
        for (int i = 1; i != 7; sleep(1), cout.flush(), i += 2) {
            cout << i << ' ';
        }
        break;
    default:
        puts("Что?");
        break;
    }
    return 0;
}
// Output:
/*
Меню
1. Прямой счёт
2. Обратный счёт
3. Только чётные
4. Только нечётные
4
1 3 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
