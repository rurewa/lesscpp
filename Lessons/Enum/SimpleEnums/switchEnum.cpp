// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление и счётчик switch case
// switchEnum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

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
    puts("Введите числа от 0 до 7");
    int getUserNum = 0;
    cin >> getUserNum;
    Digit dig = (Digit)(getUserNum);
    switch (dig)
    {
    case Digit::ZERO:
        cout << Digit::ZERO << '\n';
        break;
    case Digit::ONE:
        cout  << Digit::ONE << '\n';
        break;
    default:
        puts("What?");
        break;
    }
    return 0;
}
// Задание: дописать эту программу
/* Output:
1
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//