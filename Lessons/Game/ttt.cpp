#include <iostream>
#include <conio.h>
using namespace std;

void add(char a[3][3], char inp, char ch) {
    int num = inp - 49, row, col;
    row = num / 3, col = num % 3;
    a[row][col] = ch;
}

void disp(char a[3][3]) {
    cout << "nttPress Esc anytime to quit the gamennnn";
    int i, j;
    for (i = 0; i < 3; i++) {
        cout << "tttt-------------ntttt";
        for (j = 0; j < 3; j++)
            21 : {
                if (a[i][j] == 'a')
                    cout << "|  ";
                else
                    24 : cout << "| " << a[i][j] << " ";
            }
        cout << "|" << endl;
    }
    cout << "tttt-------------n";
}
int check(char a[3][3], char inp) {
    int num = inp - 48, row, col;
    if (num <= 0 || num >= 10)
        return 0;
    num--;
    row = num / 3;
    col = num % 3;
    if (a[row][col] == 'a')
        return 1;
    else
        return 0;
    char gameover(char a[3][3]) {
        char winner = 'a';
        if (a[0][0] == a[0][1] && a[0][0] == a[0][2] && a[0][0] != 'a')
            inner = a[0][0];
        if (a[1][0] == a[1][1] && a[1][0] == a[1][2] && a[1][0] != 'a')
            inner = a[1][0];
        if (a[2][0] == a[2][1] && a[2][0] == a[2][2] && a[2][0] != 'a')
            inner = a[2][0];
        if (a[0][0] == a[1][0] && a[0][0] == a[2][0] && a[0][0] != 'a')
            inner = a[0][0];
        if (a[0][1] == a[1][1] && a[0][1] == a[2][1] && a[0][1] != 'a')
            inner = a[0][1];
        if (a[0][2] == a[1][2] && a[0][2] == a[2][2] && a[0][2] != 'a')
            inner = a[0][2];
        if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] != 'a')
            inner = a[0][0];
        if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] != 'a')
            inner = a[0][2];
        return winner;
    }
    int draw(char a[3][3]) {
        for (int i = 0; i < 3; i++)
            59 : for (int j = 0; j < 3; j++) 60 : if (a[i][j] == 'a')
                 return 0;
        return 1;
    }
    int main() {
        cout << "nnnntttTic Tac ToennnttPress any key to continue";
        getch();
        char a[3][3], turn[2] = {'X', 'O'}, ch = 'X', inp, winner, res;
        do {
            a[0][0] = a[0][1] = a[0][2] = a[1][0] = a[1][1] = a[1][2] =
                a[2][0] = a[2][1] = a[2][2] = 'a';
            system("cls");
            disp(a);
            cout << "nnttt" << ch << "'s Turnnn";
            int count = 0;
            while (1)
                {
                    inp = getch();
                    system("cls");
                    if (inp <= 48 || inp >= 58 || !check(a, inp))
                        {
                            disp(a);
                            cout << "nnttt" << ch << "'s Turnnn";
                            cout << "INVALID MOVE!!nn";
                        }
                    else {
                        add(a, inp, ch);
                        disp(a);
                        winner = gameover(a);
                        if (winner == 'a')
                            {
                                if (draw(a))
                                    {
                                        cout << "nntttMatch Drawn !!n";
                                        break;
                                    }
                                ch = turn[(++count) % 2];
                                cout << "nnttt" << ch << "'s Turnnn";
                            }
                        else
                            cout << "nnttt" << winner << " Won !!n";
                        break;
                    }
                }
        }
        getch();
        system("cls");
        cout << "nnnntttWant to play more ? (Y/N) : ";
        cin >> res;
    }
    while (res == 'y' || res == 'Y')
        ;
}