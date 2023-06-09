// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, определяющаяя цвета в терминале по ANSI
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

/*
          foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47
*/

int main() {
    cout << "\033[31;7mHello world\033[0m" << endl; // ;7m - Инвертировать любой цвет
    for (int i = 30; i <= 37; ++i) {
        //cout << "\033[" << i << ";7mИнвертировать цвета\e[" << endl << endl;
        cout << "\033[" << i << ";7mИнвертировать цвета\033[" << endl << endl;
    }
    return 0;
}
// Output:
/*
Инвертировать цвета

Инвертировать цвета

Инвертировать цвета
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//