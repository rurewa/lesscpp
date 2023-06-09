// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сортировка String-массива
// stringArr.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main() {
    string arr[] = {"i","am","a programmer"};
    int LENGHT = sizeof(arr)/sizeof(*arr);
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    cout << "Размер массива phrase = " << LENGHT << '\n';
    cout << "Сортировка элементов массива по возрастанию\n";
    sort(arr, arr + LENGHT);
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Сортировка элементов массива по убыванию\n";
    sort(arr, arr + LENGHT, greater<string>());
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Поиск в массиве\n";
    string aFind = "am";
    bool resultFind = false;
    for (int i = 0; i < LENGHT; ++i) {
        if (arr[i] == aFind) {
            resultFind = true;
        }
    }
    // Вывод результата с использованием тернарного оператора
    cout << (resultFind ? "Есть" : "Нет") << endl;
    cout << endl;
    return 0;
}
// Output:
/*
I am a programmer
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
