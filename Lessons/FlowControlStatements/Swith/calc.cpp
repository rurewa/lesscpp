// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Калькулятор на Switch Case
// calc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    puts("Калькулятор. Введите 1-е число, оператор и 2-е число через пробелы");
    double firstNum = 0, secondNum = 0, result = 0;
    char op;
    cin >> ws >> firstNum >> ws >> op >> ws >> secondNum;
    switch (op)
    {
    case '+':
        result = firstNum + secondNum;
        break;
    case '-':
        result = firstNum + secondNum;
        break;
    case '*':
        result = firstNum * secondNum;
        break;
    case '/':
        result = firstNum / secondNum;
        break;
    default:
        puts("Что?");
        break;
    }
    cout << "Результат: " << result << endl;
    return 0;
}
// Д.З.
// Output:
/*
Калькулятор. Введите 1-е число, оператор и 2-е число через пробелы
8/7
Результат: 1.14286
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
