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
    cout << "\e[43;31mПривет!\e[0m" << endl; // Красный шрифт желтый фон
    cout << "\e[47;31mПривет!\e[0m" << endl; // Красный шрифт белый фон
    cout << "\e[47;30mПривет!\e[0m" << endl; // Чёрный шрифт белый фон
    cout << "\e[31m" << 25 << "\e[0m" << endl;
    int value = 100;
    cout << "\e[34m" << value << "\e[0m" << endl;
    cout << "\e[47;34m" << value << "\e[0m" << endl; // Синий шрифт белый фон
    cout << "\e[43;31m" << value << "\e[0m" << endl;
    const auto YELLOW = "\e[33m";
    const auto END_COLOR = "\e[0m";
    cout << YELLOW << value << END_COLOR << endl;
    return 0;

}
// Output
/*
Привет!
Привет!
Привет!
25
100
100
100
100
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-