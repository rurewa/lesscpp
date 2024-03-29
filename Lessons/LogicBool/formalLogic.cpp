// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Формальная логика и закон Де Моргана
// formalogic.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    bool a(true), b(true), c(true);
    cout << "Ассоциативность\n";
    cout << "(a || b) || c - " << ((a || b) || c) << " - тоже самое, что a || (b || c) - " << (a || (b || c)) << endl;
    cout << "(a && b) && c - " << ((a && b) && c) << " - тоже самое, что a && (b && c) - " << (a && (b && c)) << endl;
    cout << boolalpha << "(a ^ b) ^ c - " << ((a ^ b) ^ c) << " - тоже самое, что " << " a ^ (b ^ c) - " << (a ^ (b ^ c)) << endl;
    cout << "Коммуникативность\n";
    cout << "a && b - " << (a && b) << " - тоже самое, что b && a - " << (b && a) << endl;
    cout << "a || b - " << (a || b) << "  - тоже самое, что b || a - " << (b || a) << endl;
    //cout << "a ^ b - " << (a ^ b) << " - тоже самое, что b ^ a - " << (b ^ a)  << endl;
    cout << "a == b - " << (a == b) << " - тоже самое, что b == a - " << (b == a) << endl;
    cout << "Дистрибутивность\n";
    cout << "a && (b || c) - " << (a && (b || c)) << " - тоже самое, что (a && b) || (a && c) - " << ((a && b) || (a && c)) << endl;
    cout << "a || (b && c) - " << (a || (b && c)) << " - тоже самое, что (a || b) && (a && c) - " << ((a || b) && (a || c)) << endl;
    //cout << "a && (b ^ c) - " << (a && (b ^ c)) << " - тоже самое, что (a && b) ^ (b && c) - " << ((a && b) ^ (b && c)) << endl;
    cout << "Двойное отрицание\n";
    cout << "!!a это " << !!a << endl;
    cout << "Закон Де Моргана\n";
    cout << "!(a && b) - " << !(a && b) << " это тоже самое, что (!a) || (!b) - " << ((!a) || (!b)) << endl;
    cout << "!(a || b) - " << !(a || b) << " это тоже самое, что (!a) && (!b) - " << ((!a) && (!b)) << endl;
    return 0;
}
// Output:
/*
Ассоциативность
(a || b) || c - true - тоже самое, что a || (b || c) - true
(a && b) && c - true - тоже самое, что a && (b && c) - true
(a ^ b) ^ c - 1 - тоже самое, что  a ^ (b ^ c) - 1
Коммуникативность
a && b - true - тоже самое, что b && a - true
a || b - true  - тоже самое, что b || a - true
a ^ b - 0 - тоже самое, что b ^ a - 0
a == b - true - тоже самое, что b == a - true
Дистрибутивность
a && (b || c) - true - тоже самое, что (a && b) || (a && c) - true
a || (b && c) - true - тоже самое, что (a || b) && (a && c) - true
a && (b ^ c) - false - тоже самое, что (a && b) ^ (b && c) - 0
Двойное отрицание
!!a это true
Законые Де Моргана
!(a && b) - false это тоже самое, что (!a) || (!b) - false
!(a || b) - false это тоже самое, что (!a) && (!b) - false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//