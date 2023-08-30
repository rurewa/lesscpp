// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Цвет в c++ консольных программах
// color.cpp Graphic/ANCII
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

//#define RST  "\x1B[0m"
auto RST[] = "\x1B[0m";
#define KRED  "\x1B[31m"
#define FRED(x) KRED x RST

int main() {
    cout << FRED("25") << endl;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-