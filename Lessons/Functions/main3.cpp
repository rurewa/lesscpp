// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// 
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;
// Глобальные переменные
int x = 2, y = 5, z;

int exp(int a, int b); // Объявление функции

int main() {
    z = exp(x, y);
    cout << z << endl;
    return 0;
}

int exp(int a, int b) {
    int result = 1, i;
    for (i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}
// Output:
/*
32
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
