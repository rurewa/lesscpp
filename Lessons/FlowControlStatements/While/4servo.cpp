// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Срабатывание 3-х серво
// 4servo.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    // 1-е срабатывание
    if (getchar() != EOF) {
        puts("1-е срабатывание");
        puts("Серво 1 в 100");
        puts("Серво 2 в 100");
        puts("Серво 1 в 0");
        puts("Серво 2 в 0");
    }
    // 2-е срабатывание
    if (getchar() != EOF) {
        puts("2-е срабатывание");
        puts("Серво 1 в 100");
        puts("Серво 2 в 100");
        puts("Серво 1 в 0");
        puts("Серво 2 в 0");
    }
    // 3-е срабатывание
    if (getchar() != EOF) {
        puts("3-е срабатывание");
        puts("Серво 1 в 100");
        puts("Серво 2 в 100");
        puts("Серво 1 в 0");
        puts("Серво 2 в 0");
    }

    // 4-е срабатывание
    if (getchar() != EOF) {
        puts("4-е срабатывание");
        puts("Серво 3 в 90");
    }
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//