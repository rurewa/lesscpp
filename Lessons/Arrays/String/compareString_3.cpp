// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов c тернарным оператором.
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
    (firstLetter.compare(secondLetter) == 0) ? cout << "is Equar!" << '\n' : cout << "is not Equar!" << '\n';

    return 0;
}
/* Output:
Enter a first letter: y
Enter a second letter: t
is not Equar!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //