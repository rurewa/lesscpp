// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Демонстрация работы счётчиков for
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Счёт вперёд:\n";
    for (int i = 0; i < 10; ++i) {
        cout << i << " ";
	}

    cout << "\n\nОбратный отсчёт:\n";
    for (int i = 9; i >= 0; --i) {
        cout << i << " ";
	}

    cout << "\n\nС шагом 5:\n";
    for (int i = 0; i <= 50; i += 5) {
        cout << i << " ";
	}

    cout << "\n\nДругая форма for:\n";
    int count = 0;
    for ( ; count < 10; )     {
        cout << count << " ";
        ++count;
    }

    cout << "\n\nВ столбики по 5:\n";
    const int ROWS = 5;
    const int COLUMNS = 3;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            cout << i << "," << j << "  ";
		}
        cout << endl;
    }
	return 0;
}
// Output:
/*
Счёт вперёд:
0 1 2 3 4 5 6 7 8 9

Обратный отсчёт:
9 8 7 6 5 4 3 2 1 0

С шагом 5:
0 5 10 15 20 25 30 35 40 45 50

Другая форма for:
0 1 2 3 4 5 6 7 8 9

В столбики по 5:
0,0  0,1  0,2
1,0  1,1  1,2
2,0  2,1  2,2
3,0  3,1  3,2
4,0  4,1  4,2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
