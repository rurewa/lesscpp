// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Задержка в C++
// charDelay.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    cout << '*' << ' ';
    sleep(1);
    cout.flush() << '*' << ' ';
    sleep(1);
    cout.flush() << '*' << ' ';
    sleep(1);
    return 0;
}
// Output:
/*
1 2 3
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//