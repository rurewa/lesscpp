// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Пирамида с помощью While
// pyramydWhile.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
    const int HEIGHT = 5;
    int i = 0;
    while (i <= HEIGHT) {
        int y = i;
        while (y < HEIGHT) {
            cout << ' ';
            ++y;
        }
        int x = 1;
        while (x < (i * 2)) {
            cout << ++x - 1;
        }
        ++i;
        cout << '\n';
    }
    return 0;
}
// Output:
/*
    1
   123
  12345
 1234567
123456789
*/
// END