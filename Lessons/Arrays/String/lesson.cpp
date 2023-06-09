// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
//
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
//#include<string>
using namespace std;

int main() {
    short LENGHT = 3;
    string arr[LENGHT];
    cout << "Введите 1- слово: ";
    getline(cin, arr[0]);
    cout << "Введите 2- слово: ";
    getline(cin, arr[1]);
    cout << "Введите 3- слово: ";
    getline(cin, arr[2]);
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Количество элеменов в массиве: " << (sizeof(arr) / sizeof(*arr)) << '\n';
    cout << "Поиск в строковом массиве\n";
    cout << "Введите искомое слово: ";
    string findWord;
    getline(cin, findWord);
    for (int i = 0; i < LENGHT; ++i) {
        if (arr[i] == findWord) {
            cout << "Есть " << findWord;
        }
    }
    cout << endl;
    cout << "Перемешивание содержимого строкового массива\n";
    srand(time(0));
    random_shuffle(arr, arr + LENGHT);
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Сортировка строкового массива\n";
    cout << "Сортировка по возрастанию\n";
    sort(arr, arr + LENGHT);
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Сортировка по убыванию\n";
    sort(arr, arr + LENGHT, greater<string>());
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
/* Output:

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //