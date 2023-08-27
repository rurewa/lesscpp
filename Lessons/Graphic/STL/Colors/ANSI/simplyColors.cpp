// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, определяющаяя цвета в терминале по ANSI
// color.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

/*
          foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45 // Пурпурный
cyan         36         46
white        37         47
*/
/*
[0m - тэг завершения действия тега цвета
\033 или \e - это тэг цвета
[31m - номер цвета по ANSI
[1;31m - Высокая яркость цвета
[4;31m - Подчёркивать текст
*/

int main() {
     cout << "\033[31mПривет, Мир!\033[0m" << endl;
     cout << "\e[31mПривет, Мир!\e[0m" << endl;   // Можно вместо \033
     cout << "\e[1;31mПривет, Мир!\e[0m" << endl; // Высокая яркость цвета
     cout << "\e[0;91mПривет, Мир!\e[0m" << endl; // Высокая яркость цвета
     cout << "\e[4;31mПривет, Мир!\e[0m" << endl
          << endl; // Подчёркивать текст
     cout << "\e[21;31mПривет, Мир!\e[0m" << endl
          << endl; // Двойное подчёркивание
     cout << "\e[41mПривет, Мир!\e[0m" << endl
          << endl; // Изменения фона текста
     cout << "\e[0;102mПривет, Мир!\e[0m" << endl
          << endl; // Высококонтрастный фон текста
     cout << "\e[31;7mПривет, Мир!\e[0m" << endl
          << endl; // ;7m - Инвертировать любой цвет
     cout << "\e[0;102m            \e[0m" << endl
          << endl; // Просто фон
     puts("\e[41m \e[0m \e[42m \e[0m \e[43m \e[0m \e[44m \e[0m \e[44m \e[0m \e[45m \e[0m");
     puts("");
     puts("\e[46m \e[0m \e[47m \e[0m");
     puts("");
     auto blue = "\e[46m \e[0m";
     auto white = "\e[47m \e[0m";
     cout << blue << blue << blue << blue << blue
          << '\n'
          << blue << '\n'
          << blue << '\n'
          << blue << blue << blue << blue << blue
          << endl;
     puts("");
     cout << blue << blue << blue << blue << blue
          << '\n'
          << blue << "   " << blue
          << '\n'
          << blue << "   " << blue
          << '\n'
          << blue << blue << blue << blue << blue
          << endl;
     puts("");
     cout << blue << blue << blue << blue << blue
          << '\n'
          << blue << white << white << white << blue
          << '\n'
          << blue << white << white << white << blue
          << '\n'
          << blue << blue << blue << blue << blue
          << endl;
     puts("");
     puts("\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\n"
          "\e[46m \e[0m\e[47m \e[0m\e[47m\e[47m \e[0m\e[47m \e[0m\e[46m \e[0m\n"
          "\e[46m \e[0m\e[47m \e[0m\e[47m\e[47m \e[0m\e[47m \e[0m\e[46m \e[0m\n"
          "\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\n");
     puts("");
     auto backgraund = "\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\n"
          "\e[46m \e[0m\e[47m \e[0m\e[47m\e[47m \e[0m\e[47m \e[0m\e[46m \e[0m\n"
          "\e[46m \e[0m\e[47m \e[0m\e[47m\e[47m \e[0m\e[47m \e[0m\e[46m \e[0m\n"
          "\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\e[46m \e[0m\n";
     puts(backgraund);
     cout << backgraund << "25" << endl;
     return 0;
}
// Output:
/*
Привет, Мир!
Привет, Мир!
Привет, Мир!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//