// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример вычисления равенства с помощью возвращения логического значения
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

bool isEqual(int x, int y) {
    return (x == y);
}

int main() {
    cout << "Enter 1 num: ";
    int firstNum = 0;
    cin >> firstNum;
    cout << "Enter 2 num: ";
    int secondNum = 0;
    cin >> secondNum;
    cout << boolalpha;
    isEqual(firstNum, secondNum) ? cout << "is Equal" : cout << "is not Equal";

    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//