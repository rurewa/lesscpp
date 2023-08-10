// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Программа определения возможности езды на автомобиле
// carisworking.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    // Машина может ехать, если исправен мотор И трансмиссия ИЛИ не исправна ИЛИ исправна лампа габарита
    cout << "Может ли ехать машина?" << endl;
    bool motor;
    bool transmission;
    bool ligh;
    bool drive;
    cout << "Исправен ли мотор? ";
    cin >> motor;
    cout << "Исправлена ли трансмиссия? ";
    cin >> transmission;
    cout << "Исправна ли лампа левого габарита? ";
    cin >> ligh;
    drive = (ligh || motor) && (transmission && motor);
    cout << "Машина может ехать " << drive << endl;
    /*
    000 - false
    100 - false
    110 - true
    111 - true
    011 - false
    001 - false
    101 - false
    010 - false
    */
    return 0;
}
// Output
/*
Может ли ехать машина?
Исправен ли мотор? 0
Исправлена ли трансмиссия? 1
Исправна ли лампа левого габарита? 0
Машина может ехать false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-