// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Певдоцикл с помощью if.
// pseudoCycle.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    static int up = 0;
    if (up >= 0) {
        sleep(1);
        ++up;
        cout << up << endl;
        if (up >= 15) { return 0; }
        main();
    }
    /* if (up <= 15) {
        sleep(1);
        cout << up << endl;
        --up;
        if (up == 0) { return 0; }
        main();
    } */
    return 0;
}
// Д.З. Написать новую программу с таким же циклом, но используя декремент
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
