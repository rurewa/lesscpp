//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Перемешивание символьного массива
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  srand(time(0));
  cout << "Рандом элементов массива\n";
  char arr[] {'a', 'b', 'c', 'd', 'i'};
  cout << "Исходное состояние символьного массива: ";
  for (auto i : arr) {
    cout << ' ' << i;
  }
  cout << endl;
  const short ARR_SIZE = sizeof(arr) / sizeof(arr[0]);
  std::random_shuffle(arr, arr + ARR_SIZE);
  cout << "Результат перемешивания: ";
  for (int i = 0; i < ARR_SIZE; ++i) {
    cout << arr[i] << ' ';
  }
  cout << endl;
  return 0;
}
// Output
/*
Рандом элементов массива
Исходное состояние символьного массива:  a b c d i
Результат перемешивания: i a c b d
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-