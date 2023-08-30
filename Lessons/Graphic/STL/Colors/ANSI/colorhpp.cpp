// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, определяющаяя цвета в терминале по ANSI
// color.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include "color.hpp"
using namespace std;

int main() {
    string message{"I am a Banana!"};
    // Output message with
    //              foreground color -- Yellow
    //              background color -- Green
    cout << color::rize(message, "Yellow", "Blue") << endl;
    cout << color::rize("Hello!", "Yellow", "Dark Gray") << endl;
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