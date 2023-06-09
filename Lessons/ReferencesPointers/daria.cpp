// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Указатели от Дарии Emacs
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int brick = 10;
    cout << "Адрес переменной brick: " << &brick << '\n';
    cout << "Адрес переменной brick по-другому: " << addressof(brick) << '\n'; // addressof() функция библиотеки iostream
    // Для того, чтобы хранить адрес  переменной в другой переменной нужен указатель
    cout << "Массив char m[] {'a', 'b'}\n";
    char m[] {'a', 'b'};
    char *c = m;
    ++c;
    cout << &c << '\n'; // Возвращает почему-то ab, т.е. сами элементы
    char *p = m;
    cout << *p << ' ' << &p << '\n';
    ++p; // + 1 байт
    cout << *p << ' ' << &p << '\n';
    cout << "Массив int e[] {12, 14}\n";
    int e[] {12, 14};
    int *t = e;
    cout << *t << ' ' << &t << '\n';
    ++t; // + 4 байта, т.к. int - это 4 байта
    cout << *t << ' ' << &t << endl;
    return 0;
}
// Output
/*
Адрес переменной brick: 0x7ffc5f414e88
Адрес переменной brick по-другому: 0x7ffc5f414e88
b 0x7ffc5f414e78
14 0x7ffc5f414e68
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //