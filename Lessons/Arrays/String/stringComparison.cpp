// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов whitch functions.
// stringComparison.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

// Функция получения новой строки
string getStr() {
    string s;
    getline(cin, s);
    return s;
}
// Функция сравнения
bool compareStrings(string firstString, string secondString) {
    return firstString == secondString;
}

// Функция печати результата на экран
void printResult(string a, string b) {
    cout << boolalpha << compareStrings(a, b) << endl;
}

int main() {
    cout << "Введите 1-е слово: ";
    string myFirstStr = getStr();
    cout << "Введите 2-е слово: ";
    string mySecondStr = getStr();
    //cout << "Сравнение: " << boolalpha << compareStrings(myFirstStr, mySecondStr) << endl;
    printResult(myFirstStr, mySecondStr);
    /* string word = inputStr();
    cout << word << endl; */
    return 0;
}
// Output
/*
Введите 1-е слово: qwe
Ввдеите 2-е слово: qwe
Сравнение: true
*/
/* Output:
"Result: 0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //