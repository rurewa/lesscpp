// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Крестики-нолики. Пример многомерного массива
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <string>
using namespace std;

char square[10]; // На 9 клеток доски
void board();
int  setCell(int choice, char mark);
int  checkwin();

int main() {
    int player = 1, step = 0, choice = 0;
    char mark; // Метка O или X
    // Инициализация массива для квадрата доски
    for (int i = 0; i < 10; ++i) {
        square[i] = '0' + i;
    }
    do {
        board();
        player = (player % 2) ? 1 : 2; // Выбор игрока
        cout << "Player " << player << ", enter a number:  ";
        cin >> ws >> choice; // Выбор номера ячейки
        mark = (player == 1) ? 'X' : 'O'; // Выбор метки для игроков
        // set the cell of square array
        //int setRet = setCell(choice, mark); // Выбор клетки
        int setRet = 0;
        if (square[choice] == '0' + choice) {  // Ход по ячейкам
            square[choice] = mark;
            setRet = 1;
        }
        else {
            setRet = -1;
        }
        if (setRet == -1) { // Защита от некорректного ввода
            //cout << "Неверный ход!";
            ++player; // Смена игрока
            cin.clear();
            //cin.ignore(32767, '\n');
            cin.get();
        }
        step = checkwin(); // Записываем ход игрока
        ++player;
    } while (step == -1);
    board();
    if (step == 1) {
        cout << "==>\aPlayer " << --player << " победил\n";
    }
    else {
        cout << "==>\aНичья!\n";
    }
    return 0;
}

void board() {
    system("clear"); // Очистка консоли
    cout << "\n\n\tКрестики - нолики!\n\n";
    cout << "Player 1 (X) - Player 2 (O)" << endl;
    cout << endl;
    string cellLine =         "     |     |     ";
    string cellLineWithDash = "_____|_____|_____";
    for (int i = 1; i < 8; i += 3) {
        if (i == 1) {
            cout << cellLine << endl;
        }
        cout << "  " << square[i] << "  |  " << square[i + 1] << "  |  " << square[i + 2] << endl;
        if (i != 7) {
            cout << cellLineWithDash << endl;
            cout << cellLine << endl;
        }
        else {
            cout << cellLine << endl;
        }
    }
}

int checkwin() { // Определение победителя
    for (int i = 1; i < 10; ++i) {
        if ((i % 3 == 1 && (square[i] == square[i + 1] && square[i + 1] == square[i + 2])) ||
            (i <= 3 && (square[i] == square[i + 3] && square[i + 3] == square[i + 6])) ||
            (i == 1 && (square[1] == square[5] && square[5] == square[9])) ||
            (i == 3 && (square[3] == square[5] && square[5] == square[7])))
        {
            return 1;
        }
        if (square[i] == '0' + i) {
            return -1;
        }
    }
    return 0;
}

int setCell(int choice, char mark) {
    if (square[choice] == '0' + choice) {
        square[choice] = mark;
        return 1;
    }
    else {
        return -1;
    }
}
// Output:
/*
        Tic Tac Toe

Player 1 (X) - Player 2 (O)


     |     |
  1  |  2  |  3
_____|_____|_____
     |     |
  4  |  5  |  6
_____|_____|_____
     |     |
  7  |  8  |  9
     |     |

Player 1, enter a number:
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
