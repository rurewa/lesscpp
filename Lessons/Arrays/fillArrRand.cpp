// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример заполнения простого массива случайными числами
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Запускаем генератор
    int arr[5] = {};
    int secretNumber;
    for (int i = 0; i <= 4; ++i) {
        secretNumber = (rand() % 15) + 0;      // Устанавливаем диапазон чисел
        arr[i] = secretNumber;
    }
    cout << "\nСодержимое массива arr: ";
    for (int s = 0; s <= 4; ++s) {
        cout << arr[s] <<  " ";
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
