// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов c if.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

int main() {
    cout << "Enter a first letter: ";
    string firstLetter;
    getline(cin, firstLetter);
    cout << "Enter a second letter: ";
    string secondLetter;
    getline(cin, secondLetter);
    if (firstLetter.compare(secondLetter) == 0) {
        cout << "is Equar!" << '\n';
    }
    else {
        cout << "is not Equar!" << '\n';
    }

    return 0;
}
/* Output:

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //