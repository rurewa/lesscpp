// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// For и рандом
// randFor.cpp FOR
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(0)); // Инициализация генератора
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    int min = 97, max = 122, randNum = 0;
    for (int i = 97; i <= 122; sleep(1), cout.flush(), ++i) {
        randNum = (int)(rand() * FRACTION * (max - min + 1) + min);
        cout << (char)randNum << ' ';
    }
    cout << endl;
    return 0;
}
// ДЗ.
// Output:
/*
a o o j p o d q m s k s h b n w q e q a k g b w n t
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
