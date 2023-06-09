// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример использования блока сетйментов для
// уничтожения временных переменных
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main()
{
  cout << "Введите меньшее число: " << endl;
  int smalNum;
  cin >> smalNum;
  cout << "Введите большее число: " << endl;
  int largNum;
  cin >> largNum;
  cout << "Меняем значения местами, если введено неправильно" << endl;
  { // Блок нужен для уничтожения переменной temp
    if (smalNum > largNum) {
      // Временная переменная temp
      int temp = largNum; // В temp записал largNum
      largNum = smalNum; // В largNum записал smalNum
      smalNum = temp;
    } // Переменная temp уничтожается здесь
  }
  cout << "Меньшее число: " << smalNum << endl;
  cout << "Большее число: " << largNum << endl;

  return 0;
}
/* Output:
50
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//