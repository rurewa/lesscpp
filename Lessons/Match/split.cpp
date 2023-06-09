// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Задача 3 Разбей на пары
// https://www.cyberforum.ru/cpp-beginners/thread3096348.html
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long max = -1, min = 10;
    while (n > 0) {
        long long d = n % 100;
        if (d > max) max = d;
        if (d < min) min = d;
        n /= 10;
    }
    cout << max - min << endl;
    return 0;
}
// OUTPUT
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//