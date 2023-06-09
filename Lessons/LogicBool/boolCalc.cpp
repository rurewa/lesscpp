// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая программа вычисления результата логических выражений. Логический калькулятор
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
  cout << boolalpha;
  bool a, b, result;
  cout << "Enter val a: ";
  cin >> a;
  cin.ignore(32767, '\n');
  cout << "Choose bool operator (1 - &&, 2 - ||, 3 - ^, 4 - ==, 5 - !, 6 - ): ";
  int choose = 0;
  cin >> choose;
  cin.ignore(32767, '\n');
  cout << "Enter val b: ";
  cin >> b;
  cin.ignore(32767, '\n');
  switch (choose) {
  case 1:
    result = (a && b); // И
    break;
  case 2:
    result = (a || b); // ИЛИ
    break;
  case 3:
    result = (a ^ b); // ИСКЛЮЧАЮЩАЯ ИЛИ
    break;
  case 4:
    result = (a == b); // РАВНО
    break;
  case 5:
    result = (a != b); // НЕ
    break;
  default:
    cout << "Try again!";
    return main();
  }

  cout << "Результат: " << result << endl;
  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//