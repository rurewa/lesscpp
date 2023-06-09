// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов whitch functions.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

string inputtrings(string s) {
    getline(cin, s);
    return s;
}
// Функция сравнения
bool compareStrings(string firstString, string secondString) {
    return !firstString.compare(secondString); // Метод compare для сравнения
}

int main() {
    cout << "Enter a first char: ";
    string myFirstChar;
    //getline(cin, myFirstChar);
    inputtrings(myFirstChar);
    cout << "Enter a second char: ";
    string mySecondChar;
    inputtrings(mySecondChar);
    cout << "Result: " << compareStrings(myFirstChar, mySecondChar) << endl;
    return 0;
}

/* Output:
"Result: 0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //