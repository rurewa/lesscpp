// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Enum Class и счётчик for
// enumFor.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class ROWS_COLUMNS { ROWS = 5, COLUMNS = 3 };

int main() {
    for (int i = 0; i < ROWS_COLUMNS::ROWS; ++i) {
        cout << i << endl;
    }
    return 0;
}
/* Output:
0,0  0,1  0,2
1,0  1,1  1,2
2,0  2,1  2,2
3,0  3,1  3,2
4,0  4,1  4,2
*/
// Задание
/*  */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//