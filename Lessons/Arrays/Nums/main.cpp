//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Поиск дубликатор в массиве с рандомными числами
// finDublicInRandArr.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    const int LENGHT = 10;
    int arr[LENGHT] {0};
    cout << "Массив до рандома:    ";
    for (auto i : arr) { cout << i; } cout << '\n'; // Печатаю на экран весь массив
    for (int a = 0; a != LENGHT; ++a) {
        arr[a] = (rand() % 9); // Заполняю массива рандомными числами
    }
    cout << "Массив после рандома: ";
    for (auto i : arr) { cout << i; } cout << '\n'; // Печатаю на экран весь массив
    int find = 0;
    cout << "Дубликаты: "; // Это можно потом
    for (int i = 0; i < LENGHT; ++i) {
        for (int k = i + 1; k != LENGHT; ++k) {
            if (arr[i] == arr[k]) {
                for (int n = k - 1; n >= 0; --n) {
                    if (arr[k] == arr[n])
                        ++find;
                }
                if (find == 1) {
                    cout << arr[i] << ' '; // Печатаю на экран дубликаты
                }
                find = 0;
            }
        }
    }
    cout << '\n';
    return 0;
}
// Д.З.
// Output
/*
Массив до рандома:    0000000000
Массив после рандома: 6225771836
Дубликаты: 6 2 7
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-