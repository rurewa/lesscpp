//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Сортировка фиксированного массива
// fixArrSort.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  const short LENGTH = 6;
  short arr[LENGTH] {30, 80, 20, 10, 40, 1};
  cout << "Сортировка содержимого массива по возрастанию\n";
  std::sort(arr, arr+LENGTH);
  for (auto i : arr) {
    cout << ' ' << i;
  }
  cout << endl;
  cout << "Сортировка содержимого массива по убыванию\n";
  std::sort(begin(arr), end(arr), greater<>());
  for (auto i : arr) {
    cout << ' ' << i;
  }
  cout << endl;
  return 0;
}
//Output
/*
Сортировка содержимого массива по возрастанию
 1 10 20 30 40 80
Сортировка содержимого массива по убыванию
 80 40 30 20 10 1
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
