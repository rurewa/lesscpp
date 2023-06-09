//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Нахождения пар дубликатов с заменой их на рандом. Не закончен!
// А что если перед поиском и заменой дубликатов сначала отсортировать массив по возрастанию?
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <algorithm>
#include <set>
#include <array>

using namespace std;
int main() {
  srand(time(0));
  cout << "Генерируем массив случайных чисел\n";
  const int LENGHT = 10;
  int arrDups[LENGHT];
  for (int i = 0; i < LENGHT; ++i) {
    arrDups[i] = 1 + (rand() % 10);
  }
  for (auto i : arrDups) {
    cout << i << ", ";
  }
  cout << endl;
  cout << "Сортируем этот массив по возрастанию\n";
  array<int,  LENGHT> newArr;
  for (int i = 0; i < LENGHT; ++i) {
    newArr[i] = arrDups[i];
  }
  sort(newArr.begin(), newArr.end());
  for (auto i : newArr) {
    cout << i << ", ";
  }
  cout << endl;
  cout << "Ищем и удаляем парные дубликаты\n";
  for (int i = 0; i < LENGHT; ++i) {
    newArr[i] = newArr[i];
    if (newArr[i - 1] == newArr[i]) {
      cout << "Дубликат: " << newArr[i] << ' ';
      newArr[i] = 1 + (rand() % LENGHT);
    }
  }
  cout << endl;
  cout << "Итог сортировки и удаления дубликатов:\n";
  for (auto i : newArr) {
    cout << i << ", ";
  }
  cout << endl;
  return 0;
}
// Output
/*
Массив до
7, 10, 6, 7, 10, 5, 5, 5, 7, 3,
 Парный дубликат! 5
Массив после
7, 10, 6, 7, 10, 5, 5, 6, 7, 3,
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
