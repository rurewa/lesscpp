// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Калькулятор, созданный с помощью операторов Switch-case
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << "Калькулятор. Введите выражение типа 2+2\n";
    double firstNum = 0, secondNum = 0;
    char op;
    cin >> firstNum >> op >> secondNum;
    switch (op)
    {
        case '+':
            cout << firstNum + secondNum << endl;
            break;
        case '-':
            cout << firstNum - secondNum << endl;
            break;
        case '*':
            cout << firstNum * secondNum << endl;
            break;
        case '/':
            cout << firstNum / secondNum << endl;
            break;
        default:
            cout << "Введите любой из арифметических операторов!" << endl;
            break;
    }
    return 0;
}
// Output:
/*
Калькулятор. Введите выражение типа 2+2
11/6
1.83333
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
