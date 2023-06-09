// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример заполнения простого массива пользовательским вводом
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int userInput = 0;
    const short ARR_SIZE = 5;
    int arr[ARR_SIZE];
    for (int i = 0; i <= 4; ++i) {
        cout << "Введите целое число: ";
        cin >> userInput;
        arr[i] = userInput;
    }
    cout << "\nСодержимое массива arr: ";
    for (auto i : arr) {
        cout << i <<  " ";
    }
    cout << "\n";
    return 0;
}
// Output:
/*
1 2 3 4 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
