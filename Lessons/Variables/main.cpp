// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Задержка в C++
// delay.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    cout << 1 << ' ' << endl;
    sleep(1);
    cout << 2 << ' ' << endl;
    sleep(1);
    cout << 3 << ' ' << endl;

    cout << 1 << ' ';
    cout.flush();
    sleep(1);
    cout << 2 << ' ';
    cout.flush();
    sleep(1);
    cout << 3 << ' ';
    cout.flush();
    sleep(1);
    cout << endl;
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//