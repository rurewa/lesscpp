// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа-шифровальщик по ключу Цезаря
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    const auto x = 3;
    const auto n = 26;
    string line;
    getline(cin, line);
    for (auto &ch : line) {
        if (isalpha(ch)) {
            auto tmp = ch + x;
            if (islower(ch)) {
                if (tmp > 'z')
                    tmp -= n;
            }
            else if (tmp > 'Z')
                tmp -= n;
            ch = tmp;
        }
    }
    cout << line << '\n';
}
// Output:
/*
Hello World
Khoor Zruog
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
