// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа подсчёта размера строки
// lengthStr.cpp Function
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

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
    cout << "Введите любое слово: " ;
    printLengthStr(inputStr());
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