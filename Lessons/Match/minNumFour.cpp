// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Найти минимальное из 4-х чисел с помощью функции min()
// minNumFour.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    puts("Введите 4 простых числа через пробел");
    cin >> a >> b >> c >> d;
    cout << min(a, min(b, min(c, d))) << endl;
    return 0;
}
// OUTPUT
/*
Введите 4 простых числа через пробел
5 7 2 2
2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//