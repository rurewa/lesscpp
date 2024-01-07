// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum
// colors.cpp Enums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Colors {
    YELLOW,
    WHITE,
    ORANGE,
    GREEN,
};

int main() {
    Colors colorOrange = ORANGE;
    cout << "Colors color = ORANGE: " << colorOrange << endl;
    Colors colorWhite(WHITE);
    cout << "Colors colorWhite(WHITE): " << colorWhite << endl;
    int colorGreen = GREEN;
    cout << "int colorGreen = GREEN: " << colorGreen << endl;
    cout << "Yello value: " << YELLOW << endl;
    return 0;
}
// Д.З. Добавить в эту программу цветной вывод
/* Output:
Colors color = ORANGE: 2
Colors colorWhite(WHITE): 1
int colorGreen = GREEN: 3
Yello value: 0
*/

// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//