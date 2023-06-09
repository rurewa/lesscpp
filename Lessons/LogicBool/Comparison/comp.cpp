// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа примеров сравнения значений переменных
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha; // Для отображения слов true и false
    cout << true << "\t" << false << '\n';
    int firstNum = 5, secondNum = 7;
    bool result = (firstNum < secondNum);
    cout << "5 < 7:\t" << result << '\n';
    result = (secondNum < firstNum);
    cout << "7 < 5:\t" << result << '\n';
    result ^= result;
    result = (5 == 7);
    cout << "5 == 7:\t" << result << '\n';
    result ^= result;
    result = (5 != 7);
    cout << "5 != 7:\t" << result << '\n';
    result ^= result;
    result = (5 ^ 7);
    cout << "5 ^ 7:\t" << result << '\n';
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//