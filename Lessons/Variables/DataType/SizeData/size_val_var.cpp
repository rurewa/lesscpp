// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Пример, показывающий минимальный и максимальный объём типов данных
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    char chMin = SCHAR_MIN;
    char chMax = SCHAR_MAX;
    unsigned char uChMax = UCHAR_MAX;
    short shortMin = SHRT_MIN;
    short shortMax = SHRT_MAX;
    unsigned short uShortMax = USHRT_MAX;
    int intVarMin = INT_MIN;
    int intVarMax = INT_MAX;
    unsigned int uIntVarMax = UINT_MAX;
    long int longVarMin = LONG_MIN;
    long int longVarMax = LONG_MAX;
    unsigned long uLongVarMax = ULONG_MAX;
    long long longLongVarMin = LLONG_MIN;
    long long longLongVarMax = LLONG_MAX;
    unsigned long long uLongLongVarMax = ULLONG_MAX;

    cout << "Char: " << static_cast<int>(chMin) << " : " << static_cast<int>(chMax) << endl;
    cout << "Unsigned Char maximum: " << static_cast<int>(uChMax) << endl;
    cout << "Short: " << shortMin << " : " << shortMax << endl;
    cout << "Unsigned Short maximum: " << static_cast<int>(uShortMax) << endl;
    cout << "Int: " << intVarMin << " : " << intVarMax << endl;
    cout << "Unsigned Int maximum:" << uIntVarMax << endl;
    cout << "Long: " << longVarMin << " : " << longVarMax << endl;
    cout << "Unsigned Long maximum: " << uLongVarMax << endl;
    cout << "Long Long: " << longLongVarMin << " : " << longLongVarMax << endl;
    cout << "Unsigned Long Long maximum:" << uLongLongVarMax << endl;

    return 0;
}
/*
Char: -128 : 127
Unsigned Char maximum: 255
Short: -32768 : 32767
Unsigned Short maximum: 65535
Int: -2147483648 : 2147483647
Unsigned Int maximum:4294967295
Long: -9223372036854775808 : 9223372036854775807
Unsigned Long maximum: 18446744073709551615
Long Long: -9223372036854775808 : 9223372036854775807
Unsigned Long Long maximum:18446744073709551615
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//