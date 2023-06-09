// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простое сёравнение строк или символов.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

int main() {
    string firstWord, secondWord;
    cout << "Enter firstWord: ";
    getline(cin, firstWord);
    cout << "Enter secondWord: ";
    getline(cin, secondWord);
    cout << firstWord << " " << secondWord << endl;
    if (firstWord == secondWord) {
        cout << "Is equar" << endl;
    }
    else {
        cout << "Is not equar" << endl;
    }
    return 0;
}
/* Output:
Enter firstWord: we
Enter secondWord: ew
we ew
Is not equar
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //