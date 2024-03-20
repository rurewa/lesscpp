// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример заполнения и реверса содержимого фиксированного массива
// fillReverseArray.cpp Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int arr[5] = {0}; // Инициализируем новый массив нулями
    cout  << "Содержимое массива до заполнения\n";
    for (int element  = 0; element <= 4; ++element) {
		cout << arr[element] << ' ';
	}
	cout  << "\nСодерджимое массива после заполнения\n";
    for (int i = 0; i <= 4; ++i) {
        arr[i] = ++a;
        cout << arr[i] << ' ';
    }
    puts("Реверс значений массива 1-й способ");
    int b = 5;
    for (int i = 4; i >= 0; --i) {
        cout << arr[i] << ' ' ;
        arr[i] = --b;
    }
    cout << '\n';
    puts("Реверс значений массива 2-й способ");
    int array[] = {1, 2, 3, 4, 5};
    const int SIZE = sizeof(array) / sizeof(*array);
    int k = 0, reverse[SIZE];
    for (int i = SIZE - 1; i >= 0; --i) { // - 1, потому, что нам нужен последний индекс саммива
        reverse[k] = array[i];
        ++k;
    }
    for (auto i : reverse) {
        cout << i;
    }
    cout << '\n';
    return 0;
}
// Output:
/*
1 2 3 4 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//