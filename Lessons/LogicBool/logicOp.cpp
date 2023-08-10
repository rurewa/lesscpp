// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Логические операторы
// logicOp.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

 // Логические вентили - (англ. Gate) базовый элемент программной и цифровой логики

int main() {
    cout << boolalpha;
    bool a = true;
    bool b = true;
    cout << "a == b: " << (a == b) << endl; // Сравнение (эквиваленция)
    cout << "a and b: " << (a and b) << endl; // Логическое И (дизъюнкция)
    cout << "a && b: " << (a && b) << endl; // то же самое И
    cout << "a or b: " << (a or b) << endl; // Логическое ИЛИ (коньюкция)
    cout << "a || b: " << (a || b) << endl; // то же самое ИЛИ
    cout << "a not_eq b: " << (a not_eq b) << endl; // Логическое НЕРАВЕНСТВО
    cout << "a != b: " << (a != b) << endl; // Логическое НЕРАВЕНСТВО
    cout << "not a " << not a << " not b " << not b << endl; // Логическое НЕ (отрицание)
    cout << "!a " << !a << " !b " << !b << endl; // то же самое Логическое НЕ
    cout << "not a && not b " << (not a && not b) << endl;
    cout << "!a && !b " << (!a && !b) << endl;
    /* cout << "a xor b " << (a xor b) << endl; // Логическое ИСКЛЮЧАЮЩЕЕ ИЛИ
    cout << "a ^ b " << (a ^ b) << endl; // то же самое ИСКЛЮЧАЮЩЕЕ ИЛИ */
    cout << "(a == b) && (a != b): " << ((a == b) && (a != b)) << endl;
    cout << "((a == b) || (a != b)): " << ((a == b) || (a != b)) << endl;
    cout << "((a == b) != (a != b)): " << ((a == b) != (a != b)) << endl;
    return 0;
}
// Outut
/*
a == b: true
a and b: true
a && b: true
a or b: true
a || b: true
a not_eq b: false
a != b: false
!a false !b false
!a && !b false
a xor b 0
a ^ b 0
(a == b) && (a != b): false
((a == b) || (a != b)): true
((a == b) != (a != b)): true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//