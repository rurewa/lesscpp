// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая игра в крестики-нолики
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

using namespace std;

int main() {
    const int ROWS = 3, COLUMNS = 3;
    // Доска игры в крестики-нолики
    char board[ROWS][COLUMNS] = { {'O', 'X', 'O'}, {' ', 'X', 'X'}, {'X', 'O', 'O'} };

    cout << "Доска для игры в крестики-нолики:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\nпоместить 'X' в свободную клетку.\n\n";
    board[1][0] = 'X';

    cout << "Теперь доска для игры в крестики-нолики выглядит так:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\nпобедил 'X'!\n";
    return 0;
}
// Output:
/*
Доска для игры в крестики-нолики:
OXO
 XX
XOO

поместить 'X' в свободную клетку.

Теперь доска для игры в крестики-нолики выглядит так:
OXO
XXX
XOO
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//