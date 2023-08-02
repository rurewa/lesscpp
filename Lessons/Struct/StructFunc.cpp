// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура для вычисления дробных сисел
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Вычисление (a1 * a2) / (b1 * b2)

struct FractionalNum { // Объявили структуру. Дробное число
  int integerNumerator; // Числитель
  int integerDenominator; // Знаменатель
};

void multiPly(FractionalNum a, FractionalNum b) {
  // Печать с вычислением (a1 * a2) / (b1 * b2)
  // На забываем static_cast или (float), иначе компилятор выполнит целочисленное  деление!
  cout << (float)(a.integerNumerator * a.integerDenominator) /
  (b.integerNumerator * b.integerDenominator) << endl;
}

int main() {
  FractionalNum a; // Инициализировали объект структуры
  cout << "Введите 1-й числитель: " << endl;
  cin >> a.integerNumerator;
  cout << "Введите 1-й значенатель " << endl;
  cin >> a.integerDenominator;

  FractionalNum b; // Инициализировали объект структуры
  cout << "Введите 2-й числитель: " << endl;
  cin >> b.integerNumerator;
  cout << "Введите 2-й знаменатель: " << endl;
  cin >> b.integerDenominator;

  multiPly(a, b); // Печать результата

  return 0;
}
/* Output:
Введите 1-й числитель:
2
Введите 1-й значенатель
5
Введите 2-й числитель:
8
Введите 2-й знаменатель:
5
0.25
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
