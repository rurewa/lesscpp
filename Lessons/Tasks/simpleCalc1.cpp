// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Наипростейший арифметический калькулятор с if-ми используя символы
// simpleCalc1.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Простой арифметический калькулятор" << endl;
    cout << "Введите первое число: ";
    double firstNum = 0.0;
    cin >> firstNum;
    cout << "Введите символ операции" << endl;
    char op;
    cin >> op;
    cout << "Введите второе число: ";
    double secondNum = 0.0;
    cin >> secondNum;
    double result = 0.0;
    if (op == '+') {
        result = firstNum + secondNum;
    }
    else if (op == '-') {
        result = firstNum - secondNum;
    }
    else if (op == '*') {
        result = firstNum * secondNum;
    }
    else if (op == '/') {
        result = firstNum / secondNum;
    }
    else {
        cout << "Введите правильный символ - +, -, *, /!" << endl;
        return main();
    }
    cout << "Результат вычисления: " << result << "\n";

    return 0;
}
// Output:
/*
Простой арифметичкский калькулятор
Введите первое число: 2
Введите символ операции
+
Введите второе число: 2
Результат вычисления: 4
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//