// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Программа-калькулятор с защитой от некорректного ввода
// Calculator.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
using namespace std;

int main() {
  cout << "Программа-калькулятор\n";
  char again = 'y';
  double num1 = 0, num2 = 0;
  char op;
  while (again == 'y') {
    while (true) {
      cout << "Введите 1-е число\n";
      cin >> noskipws >> num1; 
      /* ws - пропускает пробелы и продолжает чтение из входного потока 
      до получения значения */
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
    while (true) {
      cout << "Введите +, -, *, или /\n";
      cin >> noskipws >> op;
      cin.ignore(32767, '\n'); // Чтобы убрать символ новой строки из входного потока
      if (op == '+' || op == '-' || op == '*' || op == '/') {
        break;
      }
      else {
        cout << "Не корретные данные! Введите +, -, *, или /\n";
      }
    }
    while (true) {
      cout << "Введите 2-е число\n";
      cin >> noskipws >> num2;
      if (cin.fail()) {
        cin.clear(); // Возвращаем cin в рабочий режим
        cin.ignore(32767, '\n');
        cout << "Что-то вы не то ввели, попробуйте снова\n";
      }
      else {
        cin.ignore(32767, '\n');
        break;
      }
    }
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
    cout << "Нажмите y для повтора или любую клавишу для выхода" << endl;
    cin >> again;
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
