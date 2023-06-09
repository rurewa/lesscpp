// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Знаковые и беззнаковые
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int var = 255; // Знаковая переменная
    unsigned uVar = -255; // Беззнаковая переменная. Переполнение
    cout << -var << "\t" << uVar << "\n";
    cout << sizeof(var) << "\t" << sizeof(uVar) << "\n";
    int varMin = INT_MIN, varMax = INT_MAX;
    cout << varMin << "\t" << varMax << "\n";
    unsigned uVarMin = 0, uVarMax = UINT_MAX;
    cout << uVarMin << "\t" << uVarMax << "\n";
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//