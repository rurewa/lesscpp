// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример сравнения 2-х значений с помощью выражения в условии
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    cout << "Enter a first num: ";
    int a{0};
    cin >> a;
    cin.ignore(32767, '\n');
    cout << "Enter a second num: ";
    int b{0};
    cin >> b;
    cin.ignore(32767, '\n');
    if ((a == b) != 0) {
        cout << "а и b равны" << endl;
    }
    else {
        cout << "а и b не равны" << endl;
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//