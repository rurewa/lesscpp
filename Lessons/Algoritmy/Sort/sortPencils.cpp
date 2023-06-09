// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сортировка карандашей по цене
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    array<float, 5> pencils = {50.3, 70.25, 60.4, 30.1, 60.4};
    sort(pencils.begin(), pencils.end());
    for (auto i : pencils) {
        cout << i << ' ';
    }
    cout << endl;
    sort(pencils.rbegin(), pencils.rend());
    for (auto i : pencils) {
        cout << i << ' ';
    }
    cout << endl;
    /* const float PENCIL_1 = 50.3;
    const float PENCIL_2 = 70.25;
    const float PENCIL_3 = 30.1;
    const float PENCIL_4 = 60.4;
    const float PENCIL_5 = 60.7;
    if (PENCIL_1 < PENCIL_2 && PENCIL_1 < PENCIL_3 && PENCIL_1 < PENCIL_4 && PENCIL_1 < PENCIL_5) {
        cout << PENCIL_1 << ' ';
    }
    else if (PENCIL_2 < PENCIL_1 && PENCIL_2 < PENCIL_3 && PENCIL_2 < PENCIL_4 && PENCIL_2 < PENCIL_5) {
        cout << PENCIL_2 << ' ';
    }
    else if (PENCIL_3 < PENCIL_1 && PENCIL_3 < PENCIL_2 && PENCIL_3 < PENCIL_4 && PENCIL_3 < PENCIL_5) {
        cout << PENCIL_3 << ' ';
    }
    else if (PENCIL_4 < PENCIL_1 && PENCIL_4 < PENCIL_2 && PENCIL_4 < PENCIL_3 &&  PENCIL_4 < PENCIL_5) {
        cout << PENCIL_4 << ' ';
    }
    else {
        cout << PENCIL_5;
    }
    cout << endl; */
    return 0;
}
// Output:
/*
30.1 50.3 60.4 60.4 70.25
70.25 60.4 60.4 50.3 30.1
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
