// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Разработать программу подсчёта количества цифр в натуральном числе
// с выводом результата на экран.
// countDigitsNum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int digits = 0, i = 1123403;
    /* do {
        ++digits;
    } while (i /= 10); */
    /* while (i /= 10) {
        ++digits;
    } */
    for (int a = 0; i /= 10; ++a) {
        ++digits;
    }
    cout << digits << '\n';
    return 0;
}
// Output:
/*
6
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//