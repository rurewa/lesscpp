// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример "чистой" функции
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int x = 2, y = 5, z;

// Чистая функция. Запускает счётчик операций
int exp(int a, int b) {
  int result = 1, i;
  for (i = 0; i < b; i++) {
    result *= a;
  }
  return result;
}

int main() {

  z = exp(x, y);

  cout << z << endl; // Результат 32
  /*
   * 2=1*2
   * 4=2*2
   * 8=4*2
   * 16=8*2
   * 32=16*2
  */
  return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//