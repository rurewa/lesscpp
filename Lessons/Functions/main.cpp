// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа подсчёта размера строки
// lengthStr.cpp Function
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

string userStr() {
    puts("Введите строку или символ");
    string str;
    getline(cin >> ws, str);
    return str;
}

int lengthStr(string str) {
    return str.length();
}

void print(string str) {
    cout << lengthStr(str) << endl;
}

int main() {
    print(userStr());
    return 0;
}
// Output
/*
Введите строку или символ
fdsfsda
7
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//