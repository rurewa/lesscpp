// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой конвертер десятичных чисел в двоичные
// Пример проверки входных чисел, являются ли они
// больше чисел, умноженных на 2 (т.е. 1, 2, 4, 8, 16
// 32, 64, 128)
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// x - это число, которое будем тестировать
// pow - это множитель 2 (например, 128, 64, 32 и т.д.)
int printandDecrementBit(int x, int pow) {
// Проверяем, является ли x больше определённого числа, умноженного на 2 и выводим бит
  if (x >= pow) { cout << "1"; }
  else { cout << "0"; }
  // Если x больше, чем число, умноженное на 2, то вычитаем его из значения
  if (x >= pow) { return x - pow; }
  else { return x; }
}

int main() {
  cout << "Enter an integer between 0 and 255: ";
  int x;
  cin >> x;

  x = printandDecrementBit(x, 128);
  x = printandDecrementBit(x, 64);
  x = printandDecrementBit(x, 32);
  x = printandDecrementBit(x, 16);
  cout << " ";
  x = printandDecrementBit(x, 8);
  x = printandDecrementBit(x, 4);
  x = printandDecrementBit(x, 2);
  x = printandDecrementBit(x, 1);

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
