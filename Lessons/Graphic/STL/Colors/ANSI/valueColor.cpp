// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Цвет в c++ консольных программах
// valueColor.cpp Color/
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

/*
          foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45 // Пурпурный (малиновый)
cyan         36         46 // Голубой
white        37         47
*/

int main() {
    //43 - фон, 31 - цвет
    cout << "\e[43;31mПривет!\e[0m" << endl; // Красный шрифт желтый фон
    cout << "\e[47;31mПривет!\e[0m" << endl; // Красный шрифт белый фон
    cout << "\e[47;30mПривет!\e[0m" << endl; // Красный шрифт белый фон
    cout << "\e[31m" << 25 << "\e[0m" << endl;
    int value = 100;
    cout << "\e[33m" << value << "\e[0m" << endl;
    cout << "\e[47;34m" << value << "\e[0m" << endl; // Синий шрифт белый фон
    const auto YELLOW = "\e[33m", END_COLOR = "\e[0m";
    cout << YELLOW << value << END_COLOR << endl;
    return 0;
}
/*
[0m - тэг завершения действия цвета
\033 или \e - это тэг цвета
[31m - номер цвета по ANSI
[1;31m - высокая яркость цвета
[4;31m - подчёркнуть текст
\e[7; - инвертирование цвета
*/
// Output
/*
Привет, 🚌 Мир!
Привет, Мир!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-