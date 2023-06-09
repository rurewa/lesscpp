// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Пример со знаковым/беззнаковым типом. Случай переполнения и минимальный
// и максимальный объём типа int
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int var = 255;
    unsigned int uVar = 255; // Внимание!
    cout << -var << "\t" << -uVar << endl; // Переполнение!
    cout << sizeof(-var) << "\t" << sizeof(-uVar) << endl;
    int varMIN = INT_MIN, varMAX = INT_MAX;
    unsigned uvarMIN = 0;
    unsigned uVarMAX = UINT_MAX;
    cout << varMIN << "\t" << varMAX << endl;
    cout << uvarMIN << "\t" << uVarMAX << endl;
    cout << -var << "\n";

    return 0;
}
// Output
/*
-255    4294967041
4       4
-2147483648     2147483647
0       4294967295
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//