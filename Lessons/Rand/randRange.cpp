// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Рандом в диапазоне чисел
// randRange.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    const double fraction = 1.0 / ((double)(RAND_MAX) + 1.0);
    //cout << RAND_MAX << endl; // Максимальное для int
    int secret = 0, min = 130, max = 150;
    secret = (int)(rand() * fraction * (max - min + 1) + min);
    cout << secret << endl;
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