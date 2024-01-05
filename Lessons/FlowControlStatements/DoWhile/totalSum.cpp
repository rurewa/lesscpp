// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Ещё пример цикла с постусловием
// totalSum.cpp DoWhile
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    float f_num = 0.0, Total = 0.0;
    do {
        cout << "Enter a number: ";
        cin >> f_num;
        Total += f_num;
    } while (f_num != 0.0);
    cout << "Total Sum = " << Total << '\n';
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//