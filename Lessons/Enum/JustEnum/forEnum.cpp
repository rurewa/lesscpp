    // -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление и счётчик for
// forEnum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
Перечисления - это множество целочисленных констант
Все перечислители enum находятся в едином пространстве имён
*/

enum Digit {
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN
};

int main() {
    for (int nums = ZERO; nums != SEVEN; ++nums) {
        Digit digits = static_cast<Digit>(nums);
        cout << digits << ' ';
    }
    cout << endl;
    for (Digit nums = ZERO; nums != SEVEN; ++(int&)nums) {
        cout << nums << ' ';
    }
    cout << endl;

    return 0;
}
/* Output:
0 1 2 3 4 5 6
*/
// Задание
/*  */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
