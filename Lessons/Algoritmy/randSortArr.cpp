//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Рандомное перемешивание содержимого массива
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
  srand(time(0));
  int arr[9] {1, 2, 3, 4, 5, 6, 7, 8, 9};
  const int LENGTH = sizeof(arr) / sizeof(*arr);
  for (int i = 0; i < LENGTH; ++i) {
    swap(arr[i], arr[rand() % LENGTH]);
  }
  for (auto i : arr) {
    cout << ' ' << i;
  }
  cout << endl;
  return 0;
}
// Output
/*
5 1 4 2 7 8 9 6 3
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-