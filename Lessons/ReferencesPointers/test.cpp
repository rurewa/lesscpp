// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Тест на указатели
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    /* short value = 7;
    short otherValue = 3;
    short *ptr = &value;
    cout << &value << '\n';
    cout << value << '\n';
    cout << ptr << '\n';
    cout << *ptr << '\n';
    cout << '\n';
    cout << &value << '\n';
    cout << value << '\n';
    cout << ptr << '\n';
    cout << *ptr << '\n';
    cout << '\n'; */
    /* int value = 45;
    int *ptr = &value;
    *ptr = &value; // Так нельзя! Обязательно нужно указать тип!
    cout << *ptr << endl;
    */
    /* int ival = 30; // Копирование 30 в ival
    int &refval = ival; // Связываение с ival
    cout << &ival << '\n'; // Получение адреса переменной
    cout << "Значение ival = "<< ival << " Значение ссылки &refval = " << &refval << " Значение refval = " << refval <<  '\n'; */
    /* int ival = 42;
    int *p = &ival;
    cout << "\nАдрес &ival " << &ival << "\nАдрес p " << p << "\nАдрес &p " << &p << '\n'; */
    int *p1 = nullptr; // Эквивалентно int *p1
    //int *p2 = 0; // Инициализация указателя нулём (не желательно)
    //cout << *p1 << '\n'; // Так нельзя!
    cout << p1 << ' ' << &p1 << '\n';
    return 0;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //