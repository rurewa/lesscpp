// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Операторы сравнения
// comp.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    bool result = true; // 0 = false
    cout << result << endl;
    cout << true << '\t' << false << endl;
    int firstNum = 5, secondNum = 7;
    result = firstNum < secondNum; // < - меньше
    cout << "5 < 7:\t" << result << endl;
    result = firstNum <= secondNum; // <= меньше или равно
    cout << "5 <= 7:\t" << result << endl;
    result = firstNum > secondNum;
    cout << "5 > 7:\t" << result << endl;
    result = firstNum >= secondNum;
    cout << "5 >= 7:\t" << result << endl;
    result = firstNum == secondNum; // == оператор равенства
    cout << "5 == 7:\t" << result << endl;
    result = firstNum != secondNum;
    cout << "5 != 7:\t" << result << endl; // НЕРАВЕНСТВО
    result = firstNum not_eq secondNum; // НЕРАВЕНСТВО
    cout << "5 not_eq 7:\t" << result << endl;
    bool a = true, b = false;
    cout << "!a: " << !a << '\t' << "!b: " << !b << endl; // логическое НЕ
    cout << "not и ! - это логическое НЕ\n";
    cout << "not a " << not a << '\t' << "not b " << not b << endl;
    char chA = 'a', chB = 'b';
    cout << "chA != chB:\t" << ((chA != chB) ? true : false) << '\n';
    string str1 = "Ivan", str2 = "Seva";
    cout << "str1 == str2:\t" << ((str1 == str2) ? true : false) << '\n';
    return 0;
}
// Output:
/*
true
true    false
5 < 7:  true
5 <= 7: true
5 > 7:  false
5 >= 7: false
5 == 7: false
5 != 7: true
5 not_eq 7:     true
!a: false       !b: true
not и ! - это логическое НЕ
not a false     not b true
chA != chB:     true
str1 == str2:   false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//