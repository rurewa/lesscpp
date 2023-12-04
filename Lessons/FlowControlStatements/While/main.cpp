// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Итерация значений в диапазоне чисел
// upDown.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int min = 0;
    int max = 255;
    int upDown = 0;
    int steps = 15;
    int counter = 0;
    int iter = 2 * (max / steps);
    while (counter <= iter) {
        ++counter;
        upDown += steps;
        if (upDown < min || upDown > max) {
            steps = -steps;
        }
        cout << upDown << endl;
    }
    return 0;
}
// ДЗ.
// Output:
/*
15
30
45
60
75
90
105
120
135
150
165
180
195
210
225
240
255
270
255
240
225
210
195
180
165
150
135
120
105
90
75
60
45
30
15
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//