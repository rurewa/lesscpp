// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление, структура и фиксированные массив
// enumStructArr.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Month { JAN = 1, FEB, MAR };

struct Type {
    float range = 2.5;
    string name = "Range";
};

int main() {
    Type List[5];
    for (Month i = Month::JAN; i <= Month::MAR; ++(int&)i) {
        cout << '#' << (int&)i << endl;
        cout << List[(int&)i].range << endl;
        cout << List[(int&)i].name <<  endl;
    }
    return 0;
}
// Д.З.
// Output:
/*
1
2.5
Month
2
2.5
Month
3
2.5
Month
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//