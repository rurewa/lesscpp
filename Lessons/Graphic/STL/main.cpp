#include <iostream>
#include <ncurses.h>
// clang++ -Wall main.cpp -lncurses -o main.bin

using namespace std;

int main() {
	cout << "😀" << endl;
    cout << "👩🏻‍🎨" << endl;
    cout << "🎃" << endl;
    initscr();                   // Переход в curses-режим
    printw("Hello world!\n");    // Отображение приветствия в буфер
    refresh();                   // Вывод приветствия на настоящий экран
    getch();                     // Ожидание нажатия какой-либо клавиши пользователем
    endwin();                    // Выход из curses-режима. Обязательная команда.
	return 0;
}

