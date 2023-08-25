// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, определяющаяя цвета в терминале по ANSI
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
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

const char ANSI_COLOR_RED[]       = "\033[31m";
const auto ANSI_COLOR_GREEN     = "\033[32m";
const auto ANSI_COLOR_YELLOW    = "\033[33m";
const auto ANSI_COLOR_BLUE      = "\033[34m";
const auto ANSI_COLOR_MAGENTA   = "\033[35m"; // Пурпурный
const auto ANSI_COLOR_CYAN      = "\033[36m"; // Бюрюзовый
const auto ANSI_COLOR_CYAN_BACK = "\033[36;47m"; // background
const auto ANSI_COLOR_RESET     = "\033[0m";

int main() {
    cout << "\033[1;31mbold red text\033[0m\n";
    cout << ANSI_COLOR_RED       << "TEXT" << endl;
    cout << ANSI_COLOR_GREEN     << "TEXT" << endl;
    cout << ANSI_COLOR_YELLOW    << "TEXT" << endl;
    cout << ANSI_COLOR_BLUE      << "TEXT" << endl;
    cout << ANSI_COLOR_MAGENTA   << "TEXT" << endl;
    cout << ANSI_COLOR_CYAN      << "TEXT" << endl;
    cout << ANSI_COLOR_CYAN_BACK << "TEXT" << endl;
    cout << ANSI_COLOR_RESET << endl;
    cout << endl << endl;
    cout << ANSI_COLOR_RESET     << "TEXT" << endl;
    cout << ANSI_COLOR_RESET     << "TEXT" << endl;
    cout << endl;
    return 0;
}
// Output:
/*
bold red text
TEXT
TEXT
TEXT
TEXT
TEXT
TEXT
TEXT
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//