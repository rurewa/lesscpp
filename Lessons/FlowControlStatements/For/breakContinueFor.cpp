// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Применение операторов continue и break в циклах for
// breakContinueFor.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
        if (i == 7) { continue; }
        cout << i << ' ';
    }
    cout << endl;
    for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
        if (i == 7) { break; }
        cout << i << ' ';
    }
    cout << endl;
    for (int i = 0; i != 10; sleep(1), cout.flush(), ++i) {
        if (i == 7) { exit(0); } // Можно ещё return 0
        cout << i << ' ';
    }
    cout << endl;
    puts("Программа выполнена!");
    return 0;
}
// Output:
/*
0 1 2 3 4 5 6 8 9
0 1 2 3 4 5 6
0 1 2 3 4 5 6
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
