// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример вложенного цикла. Полупирамидка из чисел
// nestedLoop.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int outer = 0;
    while (outer <= 5) {
        int inner = 0;
        while (inner <= outer) {
            cout << ++inner << ' ';
        }
        cout << '\n';
        ++outer;
    }
    return 0;
}
// Output:
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//