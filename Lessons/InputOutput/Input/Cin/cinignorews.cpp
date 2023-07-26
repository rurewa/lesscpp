// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// cin.ignore и ws
// cinignorews.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Введите ваш возраст\n";
    int num = 0;
    cin >> num; // num/n
    //cin.ignore(32737, '\n');
    cout << "Введите ваше имя\n";
    string str;
    getline(cin >> ws, str);
    cout << num << '\t' << str << endl;
    return 0;
}
// Output:
/*
Введите ваш возраст
2
Введите ваше имя
Alex
2       Alex
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
