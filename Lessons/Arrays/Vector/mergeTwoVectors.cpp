// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример ввода определённого количества чисел,
// вычисления суммы их значений в векторе
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Дни недели с порядковой нумерацией\n";
    vector<string> days {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    // Сопоставим векторы по дням
    vector<string> str;
    string day = "_day = ";
    char num = 48;
    for (int i = 0; i != days.size(); ++i) {
        str.push_back(++num + day + days.at(i)); // Вставляем порядковые номера и слова
        cout << str.at(i) << '\n'; // Сразу выводим на экран
    }
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
