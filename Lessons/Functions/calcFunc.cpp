// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Программа-калькулятор с защитой от некорректного ввода с функциями
// CalculatorFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
using namespace std;

double getNum() {
    double num = 0;
    while (true) {
      cout << "Введите число\n";
      cin >> ws >> num;
      if (cin.fail()) {          // Включение режима отказа
        cin.clear();             // Возвращаем cin в рабочий режим
        cin.ignore(32767, '\n'); // Удаляем всё, что не числа и символ \n
        cout << "Что-то вы не то ввели, попробуйте снова\n";
      }
      else {
        cin.ignore(32767, '\n');
        break;
      }
    }
    return num;
}

char operarot() {
    char op;
    while (true) {
      cout << "Введите +, -, *, или /\n";
      cin >> ws >> op;
      if (op == '+' || op == '-' || op == '*' || op == '/') {
        break;
      }
      else {
        cout << "Не корретные данные! Введите +, -, *, или /\n";
      }
    }
    return op;
}

void calc(int num1, char op, int num2) {
    switch (op)
    {
    case '+':
      cout << num1 << op << num2 << '=' << num1 + num2 << '\n';
      break;
    case '-':
      cout << num1 << op << num2 << '=' << num1 - num2 << '\n';
      break;
    case '*':
      cout << num1 << op << num2 << '=' << num1 * num2 << '\n';
      break;
    case '/':
      cout << num1 << op << num2 << '=' << num1 / num2 << '\n';
      break;
    default:
      break;
    }
}

int main() {
    cout << "Программа-калькулятор\n";
    char again = 'y';
    //double num1 = 0, num2 = 0;
    //char op;
    while (again == 'y') {
      double num1 = getNum();
      char op = operarot();
      double num2 = getNum();
      calc(num1, op, num2);
      cout << "Нажмите y для повтора или любую клавишу для выхода" << endl;
      cin >> ws >> again;
    }
    return 0;
}
// Output:
/*
Программа-калькулятор
Введите 1-е число
ew
Что-то вы не то ввели, попробуйте снова
Введите 1-е число
342
Введите +, -, *, или /
-
Введите 2-е число
r
Что-то вы не то ввели, попробуйте снова
Введите 2-е число
4
342-4=338
Нажмите y для повтора, n для выхода
y
Введите 1-е число
32
Введите +, -, *, или /
 /
Введите 2-е число
5
32/5=6.4
Нажмите y для повтора, n для выхода
y

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
