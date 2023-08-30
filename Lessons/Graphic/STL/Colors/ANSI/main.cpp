// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Цвет в c++ консольных программах
// color.cpp Graphic/ANCII
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define FRED(x) KRED x RST

int main() {
    cout << F_RED << 25<< "\e[24m\e[0m" << endl;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-