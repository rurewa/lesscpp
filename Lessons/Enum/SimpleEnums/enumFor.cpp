// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Перечисление и for
// enumFor.cpp Enums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

enum ROWS_COLOMNS { ROWS = 5, COLUMNS = 3 };

int main() {
    for (int i = 0; i < ROWS_COLOMNS::ROWS; cout << endl, ++i) {
        for (int k = 0; k < ROWS_COLOMNS::COLUMNS; ++k) {
            cout << i << ',' << k << ' ';
        }
    }
    return 0;
}
//
// Output
/*
0,0 0,1 0,2
1,0 1,1 1,2
2,0 2,1 2,2
3,0 3,1 3,2
4,0 4,1 4,2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-