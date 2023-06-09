// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
//
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main()
{
    // Матрица с порядковыми номерами рядов
    // int a[5][5];
    /* for (int i = 0; i < 5; ++i) {
        a[i][0] = i + 1;
        for (int j = 1; j < 5; ++j) {
            a[i][j] = 0;
        }
    }
    // смотрим, что получилось
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } */
    /* int i, j, k = 0;
    double a[5][6], min;
    // заполнение массива с клавиатуры
    for (i = 0; i < 5; i++) {
        cout << "Enter " << i + 1 << " line\n";
        for (j = 0; j < 6; j++) {
            cout << "Enter matrix element: ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    // выводим массив на экран
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // находим минимумы строк
    for (i = 0; i < 5; i++) {
        min = a[i][0];
        for (j = 0; j < 6; j++)
            if (a[i][j] <= min)
            {
                min = a[i][j];
                k = j;
            }
        cout << i + 1 << " line: min=" << min << " "
             << "k=" << k + 1 << endl;
        for (j = 0; j < 6; j++)
            a[i][j] = min * a[i][j];
    }
    cout << endl;
    // выводим массив на экран
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl; */
    /* const int x = 5, y = 5;
    int matrix[x][y] = {{1, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 0}};

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int count = 0;
    int points[8][2] = {{-1, 1},
                        {0, 1},
                        {1, 1},
                        {1, 0},
                        {1, -1},
                        {0, -1},
                        {-1, -1},
                        {-1, 0}};

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (matrix[i][j] == 1) {
                ++count;
                for (auto point : points) {
                    int xi = i + point[0];
                    int yj = j + point[1];

                    if (xi < 0 || xi >= x) {
                        continue;
                    }
                    if (yj < 0 || yj >= y) {
                        continue;
                    }
                    if (matrix[xi][yj] == 0) {
                        matrix[xi][yj] = count;
                    }
                }
            }
        }
    }
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    } */
    return 0;
}
// Output:
/*
ведите количество рядов = 3
Введите количество столбцов = 3
Введите значения элементов матрицы a
1
2
3
Заполнения ряда: 0
4
5
6
Заполнения ряда: 1
1
2
3
Заполнения ряда: 2
1 2 3
4 5 6
1 2 3
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
