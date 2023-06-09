// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Переменные в c++
// variables.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;
// Переменные - именованные объекты в программе
/*
1. Должна иметь имя (не должно начинаться с цифры. Без пробелов)
2. Должна иметь тип
3. Должна быть использована
4. Могут быть глобальной и локальной видимости
5. Может быть константой
*/

// Объявим несколько глобальных переменных
short sh; // short - это тип, sh - имя
int in = 303; // Объявление + присваивание = инициализация
long lg = 1001;
// Signed - знаковое, Unsigned - беззнаковое
int sint = -5;
unsigned int uin = 5; // Только положительные числа!
unsigned short ush = 25;
unsigned long ulg = 25350;
// Вещественные числа
float fl = 2.2; // Небольшая точность
double db = 23.767; // Большая точность
// Символы
char ch = 'f';
char ach = 'a';
char numCh = 98;
// Строковый тип
string str = "Word";

int main() {
    sh = 5; // Инициализация переменной
    cout << sh << ' ' << in << ' ' << lg << '\n';
    cout << "Знаковое, отрицательное число: " << sint << '\n';
    cout << "Беззнаковое число: " << uin << ' ' << ush << ' ' << ulg << '\n';
    cout << fl << ' ' << db << '\n';
    cout << ch << ' ' << (int)ach << ' ' << (int)numCh <<'\n';
    cout << (char)(ch + 1) << '\n';
    cout << str << '\n';
    return 0;
}
// OUTPUT
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//