// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Булевый тип данных. Простые примеры
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    bool a = false; // 0 - false, 1 - true
    bool b = true;
    cout << a << "\t" << b << "\n";
    int aa = 5, bb = 12;
    bool result = (aa == bb) ? true : false; // == - оператор сравнения
    cout << "аа равно bb? " << result << "\n";
    result = (aa < bb) ? true : false; // < - оператор сравнение "меньше"
    cout << "аа меньше bb? " << result << "\n";
    result = (aa > bb) ? false : true; // < - оператор сравнение "больше"
    cout << "аа больше bb? " << result << "\n";
    result = (aa <= bb) ? true : false; // < - оператор сравнение "меньше и равно"
    cout << "аа меньше и равно bb? " << result << "\n";
    result = (aa >= bb) ? false : true; // < - оператор сравнение "больше и равно"
    cout << "аа больше и равно bb? " << result << "\n";
    result = (aa != bb) ? true : false;
    cout << "aa не равно bb " << result << "\7" << "\n";
    result = (aa < bb) || (aa > bb); // aa меньше bb ИЛИ aa больше bb. 1 ИЛИ 1 = true, 0 ИЛИ 0 = false, 1 ИЛИ 0 = true
    cout << "Сравнение. Логическое ИЛИ " << result << "\n";
    result = (aa < bb) && (aa > bb); // 1 И 1 = true, 0 И 0 = false, 1 И 0 = false
    cout << "Сравнение. Логическое И " << result << "\n";
    result = (aa != bb) xor (aa < bb);
    cout << "Сравнение. Логическое исключающее ИЛИ XOR " << result << "\n";
    return 0;
}
// Output
/*
false   true
аа равно bb? false
аа меньше bb? true
аа больше bb? true
аа меньше и равно bb? true
аа больше и равно bb? true
aa не равно bb true
Сравнение. Логическое ИЛИ true
Сравнение. Логическое И false
Сравнение. Логическое исключающее ИЛИ XOR false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
