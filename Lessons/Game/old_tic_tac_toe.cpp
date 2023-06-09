// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Крестики-нолики. Пример многомерного массива
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <string>
using namespace std;
char square[10];
void board();
int setCell(int choice, char mark);
int checkwin();
int main(){
    int player = 1, i, choice;
    char mark; // Метка
    // Инициализация массива для квадрата доски
    for (int i = 0; i < 10; ++i) {
        square[i] = '0' + i;
    }
    do {
        board();
        player = (player % 2) ? 1 : 2; // Выбор игрока
        cout << "Player " << player << ", enter a number:  ";
        cin >> choice; // Выбор номера ячейки
        mark = (player == 1) ? 'X' : 'O'; // Выбор крестика или нолика
        // set the cell of square array
        int setRet = setCell(choice, mark); // Выбор клетки
        if (setRet == -1) { // Защита от некорректного ввода
            cout << "Неверный ход!";
            ++player;
            cin.ignore();
            cin.get();
        }
        i = checkwin(); // Проверка победителя
        ++player;
    } while (i == -1);
    board();
    if (i == 1) {
        cout << "==>\aPlayer " << --player << " победил ";
    }
    else {
        cout << "==>\aНичья!";
    }
}
void board(){
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
int checkwin(){ // Определение победителя
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
int setCell(int choice, char mark){
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
  1 |  2  | 3
_____|_____|_____
     |     |
  4 |  5  | 6
_____|_____|_____
     |     |
  7 |  8  | 9
     |     |
Player 1, enter a number:
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
