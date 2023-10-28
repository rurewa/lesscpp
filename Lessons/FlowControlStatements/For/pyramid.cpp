// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пирамида.
// pyramid.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    const int height = 5; // Высота пирамиды
    for (int i = 1; i <= height; ++i) {
        for (int y = i; y < height; ++y) {
            cout << ' ';
        }
        for (int x = 1; x < (i * 2); ++x) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}

/*
 * | |1|2|3|4|5|6|7|8|9|  x
 * |1| | | | |*| | | | |
 * |2| | | |*|*|*| | | |
 * |3| | |*|*|*|*|*| | |
 * |4| |*|*|*|*|*|*|*| |
 * |5|*|*|*|*|*|*|*|*|*|
 */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
