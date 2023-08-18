// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример использования логических значений для сервера.
// При каких условиях сервер будет исправен?
// serverIsWorking.cpp
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << boolalpha;
    // Сервер работает при условии работы кондиционера И кулера процессора
    bool cond, coolFan, result;
    cout << "Кондиционер работает? ";
    cin >> cond;
    cout << "Кулер процессора работает? ";
    cin >> coolFan;
    result = cond && coolFan;
    cout << "Исправность сервера: " << result << '\n';
    /*
    11 - исправен (true)
    10 - неисправен (false)
    00 - неисправен (false)
    01 - неисправен (false)
    */

    return 0;
}
// Output
/*
Кондиционер работает? 0
Кулер процессора работает? 1
Исправность сервера: false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//