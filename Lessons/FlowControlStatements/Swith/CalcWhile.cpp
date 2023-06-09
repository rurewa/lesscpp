// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Калькулятор, созданный с помощью операторов Switch-case
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    char again = 'y';
    while (again == 'y') {
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
        cout << "Хотите снова? y - да, n - завершить" << endl;
        cin >> again;
    }
    return 0;
}
// Output:
/*
4
Хотите снова? y - да, n - завершить
n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
