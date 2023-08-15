// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Формальная логика и закон Де Моргана
// formalogic.cpp Bools
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    bool a = true, b = true, c = true;
    cout << "Ассоциативность\n";
    cout << "(a || b) || c - " << ((a || b) || c) <<
         " - (a || (b || c)) - " << (a || (b || c)) << endl;
    cout << "(a && b) && c - " << ((a && b) && c) <<
         " - a && (b && c) - " << (a && (b && c)) << endl;
    cout << "Коммуникативность\n";
    cout << "a && b - " << (a && b) << " b && a " << (b && a) << endl;
    cout << "a || b - " << (a || b) << " b || a " << (b && a) << endl;
    cout << "a == b - " << (a == b) << " b == a " << (b == a) << endl;
    cout << "Дистрибутивность\n";
    cout << "a && (b || c) - " << (a && (b || c))
         << " ((a && b) || (a && c)) " << ((a && b) || (a && c)) << endl;
    cout << "a || (b && c) - " << (a || (b && c))
         << " (a || b) && (a || c) " << ((a || b) && (a || c)) << endl;
    cout << "Двойное отрицание\n";
    cout << "!!a - " << !!a << endl;
    cout << "Закон Де Морган\n";
    cout << "!(a && b) - " << (!(a && b)) << " !a || !b " << (!a || !b) << endl;
    cout << "!(a || b) - " << (!(a || b)) << " !a && !b " << (!a && !b) << endl;
    return 0;
}
// Output:
/*
Ассоциативность
(a || b) || c - true - (a || (b || c)) - true
(a && b) && c - true - a && (b && c) - true
Коммуникативность
a && b - true b && a true
a || b - true b || a true
a == b - true b == a true
Дистрибутивность
a && (b || c) - true ((a && b) || (a && c)) true
a || (b && c) - true (a || b) && (a || c) true
Двойное отрицание
!!a - true
[user@grip3script LogicBool]$ clang++ -Wall main.cpp -o main.bin
[user@grip3script LogicBool]$ ./main.bin
Ассоциативность
(a || b) || c - true - (a || (b || c)) - true
(a && b) && c - true - a && (b && c) - true
Коммуникативность
a && b - true b && a true
a || b - true b || a true
a == b - true b == a true
Дистрибутивность
a && (b || c) - true ((a && b) || (a && c)) true
a || (b && c) - true (a || b) && (a || c) true
Двойное отрицание
!!a - true
Закон Де Морган
!(a && b) - false !a || !b false
[user@grip3script LogicBool]$ clang++ -Wall main.cpp -o main.bin
[user@grip3script LogicBool]$ ./main.bin
Ассоциативность
(a || b) || c - true - (a || (b || c)) - true
(a && b) && c - true - a && (b && c) - true
Коммуникативность
a && b - true b && a true
a || b - true b || a true
a == b - true b == a true
Дистрибутивность
a && (b || c) - true ((a && b) || (a && c)) true
a || (b && c) - true (a || b) && (a || c) true
Двойное отрицание
!!a - true
Закон Де Морган
!(a && b) - false !a || !b false
!(a || b) - false !a && !b false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//