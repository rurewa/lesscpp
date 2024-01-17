// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum
// colors.cpp EnumsClass
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN,
};

int main() {
    Colors colorOrange = Colors::ORANGE;
    //cout << "Color = ORANGE: " << static_cast<int>(colorOrange) << endl;
    cout << "Color = ORANGE: " << (int)colorOrange << endl;
    Colors colorWhite(Colors::WHITE);
    //cout << "Color = WHITE: " << static_cast<int>(colorWhite) << endl;
    cout << "Color = WHITE: " << (int)colorWhite << endl;
    Colors colorGreen = Colors::GREEN;
    //cout << "Color = GREEN: " << static_cast<int>(colorGreen) << endl;
    cout << "Color = GREEN: " << (int)colorGreen << endl;
    return 0;
}
/* Output:

*/
// Заданиеv
/*
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
