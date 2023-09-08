// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// If и время жизни локальных переменных
// livetimeOfVariables.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    int val = 10;
    if (val == 10) {
      bool result = true; // Локальная переменная, которая рождается и умирает внутри if
    }
    cout << val << ' ' << result << endl;
    return 0;
}
// Output
/*
main.cpp:13:27: error: use of undeclared identifier 'result'
    cout << val << ' ' << result << endl;
                          ^
1 warning and 1 error generated.
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-