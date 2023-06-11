// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
Перечисления - это набор именованных целочисленных констант
Все перечислители enum находятся в едином пространстве имён
*/

enum Digit {
    ZERO,
    ONE,
    TWO,
    THREE = 10, // Так не надо сразу!
    FOUR,
    FIVE,
    SIX,
    SEVEN
};

int main() {
    Digit zero = ZERO;
    Digit one = ONE;
    Digit two = TWO, three = THREE, four = FOUR;
    cout << zero << ' ' << one << '\n';
    cout << two << ' ' << three << ' ' << four << '\n';

    return 0;
}
/* Output:
0 1
*/
// Задание
/* Предложить ребятам продолжить самостоятельно дописать программу */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//