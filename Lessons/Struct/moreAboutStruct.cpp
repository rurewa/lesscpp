// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Ещё о структурах
// moreAboutStruct.cpp Struct
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Somening { int nX, nY, nZ; }; // Объявление полей структуры в одну строку
struct Some
{
    const int a = 10;
    int b;
    char c;
    double d;
    unsigned short e;
    bool boo;
};


int main() {
    Somening so;
    cout << "Размер поля в байтах: " << sizeof(so.nX) << " тип поля: " << typeid(so.nX).name() << endl;
    // Задание - дописать код для оставшихся 2-х полей
    /* cout << "Размер поля в байтах: " << sizeof(so.nY) << " тип поля: " << typeid(so.nY).name() << endl;
    cout << "Размер поля в байтах: " << sizeof(so.nZ) << " тип поля: " << typeid(so.nZ).name() << endl; */
    Some some;
    some.b = 12;
    cout << some.b << endl;
    //some.a = 30; // Так нельзя! Это поле является константой
    //cout << come.a << endl;
    cout << "Размер some.a: " << sizeof(some.a) << typeid(some.a).name() << endl;
    // Задание - дописать код для оставшихся полей
    /* cout << "Размер some.b: " << sizeof(some.b) << typeid(some.b).name() << endl;
    cout << "Размер some.c: " << sizeof(some.c) << typeid(some.c).name() << endl;
    cout << "Размер some.d: " << sizeof(some.d) << typeid(some.d).name() << endl;
    cout << "Размер some.e: " << sizeof(some.e) << typeid(some.e).name() << endl;
    cout << "Размер some.boo: " << sizeof(some.boo) << typeid(some.boo).name() << endl;*/
    return 0;
}
// Д.З.
// OUTPUT
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //