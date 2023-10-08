// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Калькулятор на Switch Case
// calc.cpp SwitchCase
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    puts("Калькулятор. Введите 1-е число, оператор и 2-число через пробелы");
    double firstNum = 0, secondNum = 0, result = 0;
    char op;
    cin >> ws >> firstNum >> ws >> op >> ws >> secondNum;
    switch (op)
    {
    case '+':
        result = firstNum + secondNum;
        break;
    case '-':
        result = firstNum - secondNum;
        break;
    default:
        puts("Не понял!");
        break;
    }
    cout << "Результат: " << result << '\n';
    return 0;
}
// Д.З. Дописать программу, введя в неё умножение и деление
// Output:
/*
Калькулятор. Введите 1-е число, оператор и 2-число через пробелы
1+1
Результат: 2
TEXT
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//