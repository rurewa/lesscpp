// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Цикл For и рандом
// randFor.cpp For
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(0)); // Инициализация таймера
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    int min = 97, max = 122, randNum = 0;
    for (int i = 97; i <= 122; sleep(1), cout.flush(), ++i) {
        randNum = (int)(rand() * FRACTION * (max - min + 1) + min);
        cout << (char)randNum << ' ';
    }
    cout << endl;
    return 0;
}
// Output:
/*
l l o v p o v n t p y f b b k r v o a p d d o b m e
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
