// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// 3D массив чисел
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int s = 2; // Подмассивы
    int r = 3; // Ряды
    int c = 5; // Столбцы

    int arr[s][r][c]; // Трёхмерный массив
    /*Заполняем трёхмерный массив значениями*/
    int count = 1; // число для заполнения
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < r; ++j) {
            for (int k = 0; k < c; ++k) {
                arr[i][j][k] = ++count;
            }
        }
    }
    /*Выводим массив на экран*/
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < r; cout << endl, ++j) {
            for (int k = 0; k < c; ++k) {
                cout << arr[i][j][k] << '\t';
            }
        }
        cout << '\n';
    }
    return 0;
}
// Output:
/*
2       3       4       5       6
7       8       9       10      11
12      13      14      15      16

17      18      19      20      21
22      23      24      25      26
27      28      29      30      31
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//