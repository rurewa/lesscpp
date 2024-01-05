// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример цикла с постусловием
// doWhile.cpp DoWhile
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    do {
        ++counter;
        cout << "хотя бы " << counter << " раз...\n";
    } while (counter < 0);
    while (counter < 0) {
        ++counter;
        cout << counter << '\n';
    }
    return 0;
}
// Output:
/*
- хотя бы 1 раз...
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//