// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Заполнить символьный массив буквами английского алфавита
// abcArr.cpp в папке Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    char alphabet[26];
    int i = 0;
    for (char abc = 'a'; abc <= 'z'; ++abc, ++i) {
        alphabet[i] = abc;
    }
    for (auto i : alphabet) { cout << i; }
    cout << endl;
    for (int i = 26; i >= 0; --i) {
        cout << alphabet[i];
    }
    cout << endl;
    return 0;
}
/* Output:
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponmlkjihgfedcba
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //