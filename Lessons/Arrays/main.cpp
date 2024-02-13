// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Фиксированные массивы. Начало
// fixArr.cpp в папке Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
1, 0, 100, 25, 3 - коллекция однотипных элементов
{0, 1, 2} - каждый элемент в массиве является переменной без своего имени
и надодится под своим порядковым номером, называемым индексов, которые
всегда начинается с 0 и этот порядок не изменить.
0 до N-1 - это диапазон массива
Индексы массива всегда числовые и используются как способ доступа к элеменем массива
*/

int main() {
    short arr[3]; // Объявил фиксированный массив размером 3
    arr[0] = 10; // Инициализировал 1-й элемент массива значением
    arr[1] = 20;
    arr[2] = 30;
    puts("Содержимое массива arr:");
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << endl;
    //arr[3] = 40; // Ошибка! Расширить фиксированный массив нельзя
    // Размер массива в байтах
    int arrSize = sizeof(arr);
    cout << "Размер массива в байтах: " << arrSize << endl;
    // Подсчитать количество элементов в массиве
    int arrCount = sizeof(arr) / sizeof(*arr);
    cout << "Количество элементов в массиве arr: " << arrCount << endl;
    int array[5] = {0}; // Инициализация массива нулями
    puts("Содержимое массива array:");
    for (int i = 0; i != 5; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;
    puts("Получить содрежимое массива другим способом:");
    for (auto i : array) { cout << i << ' '; }
    cout << endl;
    return 0;
}
/* Output:
Содержимое массива arr:
10 20 30
Размер массива в байтах: 6
Количество элементов в массиве arr: 3
Содержимое массива array:
0 0 0 0 0
Получить содрежимое массива другим способом:
0 0 0 0 0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //