// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление и счётчик for
// forEnum.cpp Enums
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
    puts("1 способ итерации через конвертацию типов");
    for (int nums = Digit::ZERO; nums != Digit::SEVEN; ++nums) {
        //Digit digits = static_cast<Digit>(nums);
        Digit digits = (Digit)(nums);
        cout << digits << ' ';
    }
    cout << endl;
    puts("2 способ итерации через доступ к перечислениям по ссылке");
    for (Digit nums = Digit::ZERO; nums != Digit::SEVEN; ++(int&)nums) {
        cout << nums << ' ';
    }
    cout << endl;
    /* for (int nums = ZERO; nums != SEVEN; ++nums) {
        //Digit digits = static_cast<Digit>(nums);
        Digit digits = (Digit)(nums);
        cout << digits << ' ';
    }
    cout << endl;
    for (Digit nums = ZERO; nums != SEVEN; ++(int&)nums) {
        cout << nums << ' ';
    }
    cout << endl;*/
    return 0;
}
/* Output:
1 способ итерации
0 1 2 3 4 5 6
2 способ итерации
0 1 2 3 4 5 6
*/
// Задание
/*  */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
