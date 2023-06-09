// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Простой пример сортировки фиксированного массива по возрастанию и по убыванию
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int LENGTH = 5;
    int array[LENGTH] = {30, 50, 20, 10, 40};
    cout << "До сортировки\n";
    for (auto i : array) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "После сортировки по возрастанию\n";
    sort(array, array + LENGTH);
    for (auto i : array) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "После сортировки по убыванию\n";
    sort(array, array + LENGTH, greater<int>());
    for (auto i : array) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
/*
До сортировки
30 50 20 10 40
После сортировки по возрастанию
10 20 30 40 50
После сортировки по убыванию
50 40 30 20 10
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//