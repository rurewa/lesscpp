//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Нахождения пар дубликатов. Не закончен!
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>

using namespace std;
int main() {
  cout << "Массив до\n";
  int arrDups[] = {4, 4, 3, 3, 2, 4, 5, 5, 2, 1};
  for (auto i : arrDups) {
    cout << i << ", ";
  }
  cout << endl;
  const int LENGHT = 10;
  int newArr[LENGHT];
  for (int i = 0; i < LENGHT; ++i) {
    newArr[i] = arrDups[i];
    if (newArr[i - 1] == arrDups[i]) {
      cout << " Парный дубликат! " << arrDups[i];
      newArr[i] = 0; // Заполнение 0-ми дубликатов
    }
  }
  cout << "\nМассив после\n";
  for (auto i : newArr) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
// Output
/*
Массив до
4, 4, 3, 3, 2, 4, 5, 5, 2, 1,
 Дубликат! 4 Дубликат! 3 Дубликат! 5
Массив после
4, 0, 3, 0, 2, 4, 5, 0, 2, 1,
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
