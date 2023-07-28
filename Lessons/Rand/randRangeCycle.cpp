// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Рандом в диапазоне чисел
// randRangeCycle.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(0));
    const double fraction = 1.0 / ((double)(RAND_MAX) + 1.0);
    //cout << fraction << endl; // Максимальное для double
    //cout << RAND_MAX << endl; // Максимальное для int
    int secret = 0, min = 6, max = 10;
    while (true) {
        secret = (int)(rand() * fraction * (max - min + 1) + min);
        cout << secret << endl;
        //sleep(1);
        //system("clear");
        if (secret > max || secret < min) {
            cout << '\a';
            return 0;
        }
    }
    return 0;
}
// Output:
/*
10
9
8
6
8
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//