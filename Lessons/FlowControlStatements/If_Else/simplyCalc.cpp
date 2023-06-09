// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Наипростейший арифметический калькулятор с if-ми используя числа
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Простой арифметичкский калькулятор" << endl;
    cout << "Введите первое число: ";
    double firstNum = 0.0;
    cin >> firstNum;
    cout << "Введите номер операции: 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление" << endl;
    int op = 0;
    cin >> op;
    cout << "Введите второе число: ";
    double secondNum = 0.0;
    cin >> secondNum;
    double result = 0.0;
    if (op == 1) {
        result = firstNum + secondNum;
    }
    else if (op == 2) {
        result = firstNum - secondNum;
    }
    else if (op == 3) {
        result = firstNum * secondNum;
    }
    else if (op == 4) {
        int res = static_cast<int>(result);
        cout << (res = static_cast<int>(firstNum) % static_cast<int>(secondNum)) << '\n';
    }
    else {
        cout << "Введите числа от 1-4!" << endl;
        return main();
    }
    cout << "Результат вычисления: " << result << "\n";

    return 0;
}
// Output:
/*
Простой арифметичкский калькулятор
Введите первое число: 2
Введите номер операции: 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление
1
Введите второе число: 2
Результат вычисления: 4
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//