// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Минимальное и максимальное значение, помещающееся в данный числовой тип
// 1 == sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<limits>
using namespace std;

int main() {
    cout << "minimum value BOOL: " << numeric_limits<bool>::min() << '\n'
         << "maximum value BOOL: " << numeric_limits<bool>::max() << '\n'
         << "minimum value CHAR: " << numeric_limits<char>::min() << '\n'
         << "maximum value CHAR: " << numeric_limits<char>::max() << '\n'
         << "minimum value SHORT: " << numeric_limits<short>::min() << '\n'
         << "maximum value SHORT: " << numeric_limits<short>::max() << '\n'
         << "minimum value INT: " << numeric_limits<int>::min() << '\n'
         << "maximum value INT: " << numeric_limits<int>::max() << '\n'
         << "minimum value LONG: " << numeric_limits<long>::min() << '\n'
         << "maximum value LONG: " << numeric_limits<long>::max() << '\n'
         << "minimum value LONG LONG: " << numeric_limits<long long>::min() << '\n'
         << "maximum value LONG LONG: " << numeric_limits<long long>::max() << '\n'
         << "minimum value FLOAT: " << numeric_limits<float>::min() << '\n'
         << "maximum value FLOAT: " << numeric_limits<float>::max() << '\n'
         << "minimum value DOUBLE: " << numeric_limits<double>::min() << '\n'
         << "maximum value DOUBLE: " << numeric_limits<double>::max() << '\n'
         << "minimum value LONG DOUBLE: " << numeric_limits<long double>::min() << '\n'
         << "maximum value LONG DOUBLE: " << numeric_limits<long double>::max() << '\n';
    return 0;
}
// Output:
/*
minimum value BOOL: 0
maximum value BOOL: 1
minimum value CHAR: �
maximum value CHAR:
minimum value SHORT: -32768
maximum value SHORT: 32767
minimum value INT: -2147483648
maximum value INT: 2147483647
minimum value LONG: -9223372036854775808
maximum value LONG: 9223372036854775807
minimum value LONG LONG: -9223372036854775808
maximum value LONG LONG: 9223372036854775807
minimum value FLOAT: 1.17549e-38
maximum value FLOAT: 3.40282e+38
minimum value DOUBLE: 2.22507e-308
maximum value DOUBLE: 1.79769e+308
minimum value LONG DOUBLE: 3.3621e-4932
maximum value LONG DOUBLE: 1.18973e+4932
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//