// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Программа определения возможности езды на автомобиле
// allowedToWork.cpp
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main() {
    // Машина поедет И ей разрешено, если исправны мотор И трансмиссия И исправна лампа габарита
    cout << "Исправен ли мотор? ";
    bool motor;
    cin >> motor;
    cout << "Исправна ли трансмиссия? ";
    bool trans;
    cin >> trans;
    cout << "Исправна ли лампа левого габарита? ";
    bool ligh;
    cin >> ligh;
    cout << "Разрешено ли ехать машине?: " << ((motor && trans) && (motor || ligh) && (!trans || ligh)) << endl;
    /*
    000 - false
    100 - false
    110 - false
    111 - true
    001 - false
    011 - false
    101 - false
    010 - false
    */
    return 0;
}
// Output
/*
Исправен ли мотор? 1
Исправна ли трансмиссия? 1
Исправна ли лампа левого габарита? 0
Машина поедет: false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-