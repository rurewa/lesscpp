//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Простой алгоритм, который увеличивает и уменьшает определённое значение
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
    int min = 0;
    int max = 255;
    int steps = 25;
    while (min < max) {
        min += steps;
        cout << min << endl;
    }
    while (min > 0) {
       cout << min << endl;
       min -= steps;
    }
    return 0;
}
// Output
/*
25
50
75
100
125
150
175
200
225
250
275
275
250
225
200
175
150
125
100
75
50
25
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//