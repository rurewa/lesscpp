// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов.
// comparisonString.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << "Введите 1-ю строку или символ: ";
    string myFirstChar;
    getline(cin, myFirstChar);
    cout << "Введите 2-ю строку или символ: ";
    string mySecondChar;
    getline(cin, mySecondChar);
    //cout << "Результат: " << !myFirstChar.compare(mySecondChar) << endl; // При помощи метода compare
    cout << "Результат: " << boolalpha << (myFirstChar == mySecondChar) << endl;
    return 0;
}
/* Output:
Введите 1-ю строку или символ: 1
Введите 2-ю строку или символ: 1
Результат: true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //