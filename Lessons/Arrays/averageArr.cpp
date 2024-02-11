//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Арифметика в фиксированных массивах
// Найти среднее арифметическое с помощью массива и счётчика
// averageArr.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main(){
  // Средний бал учеников
  int arr[] {25, 33, 70, 100, 11};
  const short INDEX = sizeof(arr) / sizeof(*arr);
  int sum = 0;
  for (int a = 0; a < INDEX; ++a) {
    sum += arr[a];
  }
  int average = sum / INDEX;
  cout << average << endl;
  return 0;
}
//Output
/*
47
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-