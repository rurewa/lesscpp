// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример вычисления суммы значений элементов в
// простом массиве.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int sum = 0;

int main() {
  int arr[5] = {25, 10, 3, 47, 100};
  for (int i = 0; i <= 4 ; ++i) {
    sum += arr[i];
  }
  cout << sum << endl;

  return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
