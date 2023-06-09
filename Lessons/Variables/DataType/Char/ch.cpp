#include<iostream>
using namespace std;

int main() {
    char h = 'H';
    int ch = 72;
    char r = 'r';
    // Конвертация static_cast
    cout << static_cast<int>(h) << endl;
    cout << static_cast<char>(ch) << endl;
    // Конвертация символа в число таблице ASCII
    int rr = r;
    cout <<  rr << endl;
    int b = 98;
    // Обратная конвертация из int в char
    char bb = b;
    cout << bb << endl;

    return 0;
}