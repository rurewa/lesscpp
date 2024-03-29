//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Арифметика в фиксированных массивах
// Найти среднее арифметическое с помощью массива и счётчика
// averageArr.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main() {
  // Средний бал учеников
  int arr[] {25, 33, 70, 100, 11};
  const short INDEX = sizeof(arr) / sizeof(*arr);
  double sum = 0;
  for (int a = 0; a < INDEX; ++a) {
    sum += arr[a];
  }
  double average = sum / INDEX;
  cout << average << endl;
  return 0;
}
// Д.З. На основе этой программы сделать новую, только с ручным вводом значений элементов массива
//Output
/*
47.8
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-