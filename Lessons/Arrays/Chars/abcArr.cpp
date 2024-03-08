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
    /* puts("В обратном порядке способ 1");
    for (int i = 26; i >= 0; --i) {
        cout << alphabet[i];
    }
    cout << endl;
    i = 0;
    puts("В обратном порядке способ 2");
    for (char abc = 'z'; abc >= 'a'; --abc, ++i) {
        cout << (alphabet[i] = abc);
    }
    cout << endl; */
    return 0;
}
// Д.З. Дописать эту программу так, чтобы она напечатала из массива на экран буквы
// англ.алф. в обратном порядке
/* Output:
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponmlkjihgfedcba
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //