// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Примры применения многомерного массива
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
using namespace std;

int main() {
    const int ARR_COL_SIZE = 2, ARR_ROW_SIZE = 3;
    int multiArr[ARR_COL_SIZE][ARR_ROW_SIZE] = {{12, 30, 45}, {78, 96, 101}}; // {{0}, {1}}
    // 1-е измерение обычно рассматривается как столбцы, а 2-е как ряды
    cout << "Доступ к элементам многомерного массива обычным способом: ";
    cout << multiArr[0][0] << ", ";
    cout << multiArr[0][1] << ", ";
    cout << multiArr[0][2] << ",\t";
    cout << multiArr[1][0] << ", ";
    cout << multiArr[1][1] << ", ";
    cout << multiArr[1][2] << '\n';
    cout << '\n';
    cout << "Доступ к элементам многомерного массива с помощью перебора (for): ";
    for (int col = 0; col < ARR_COL_SIZE; ++col) {
        for (int row = 0; row < ARR_ROW_SIZE; ++row) {
            cout << multiArr[col][row] << ' ';
        }
        cout << "\t";
    }
    cout << "\nПолучение x/y координат\n";
    cout << "X: ";
    for (int x = 0; x < ARR_ROW_SIZE; ++x) {
        cout << multiArr[0][x] << ' ';
    }
    cout << "\nY: ";
    for (int y = 0; y < ARR_ROW_SIZE; ++y) {
        cout << multiArr[1][y] << ' ';
    }
    cout << '\n';
    return 0;
}

// Output
/*
Доступ к элементам многомерного массива обычным способом: 12, 30, 45,   78, 96, 101

Доступ к элементам многомерного массива с помощью перебора (for): 12 30 45      78 96 101
Получение x и y координат
X: 12 30 45
Y: 78 96 101
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
