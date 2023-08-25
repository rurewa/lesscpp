// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов.
// comparisonString.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;
string myChar();
void resultOut(bool result);
bool comparison(string num1, string num2);

int main(){
    cout << "Введите 1-ю строку или символ: ";
    string myFirstChar;
    myFirstChar = myChar();
    cout << "Введите 2-ю строку или символ: ";
    string mySecondChar;
    mySecondChar = myChar();
    //cout << "Результат: " << !myFirstChar.compare(mySecondChar) << endl; // При помощи метода compare
    resultOut(comparison(myFirstChar, mySecondChar));
    
    return 0;
}
string myChar(){
    string a;
    getline(cin, a);
    return a;
}
void resultOut(bool result){
    cout << result << endl;
}
bool comparison(string num1, string num2){
    cout << boolalpha;
    return num1 == num2 ? true : false;
}
/* Output:
Введите 1-ю строку или символ: 1
Введите 2-ю строку или символ: 1
Результат: true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //