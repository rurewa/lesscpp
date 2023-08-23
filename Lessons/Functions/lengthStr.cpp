// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа подсчёта размера строки
// lengthStr.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/* string str(string str) {
    return str;
} */

string inputStr() {
    string inStr;
    getline(cin, inStr);
    return inStr;
}

int lengthStr(string str) {
        return str.length();
}

void printLengthStr(string str) {
    cout << lengthStr(str) << endl;
}

int main() {
    //cout << str("word") << endl;
    cout << "Введите любое слово: " ;
    string userStr = inputStr();
    printLengthStr(userStr);
    return 0;
}
// Output
/*
Введите любое слово: qwe
3
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//