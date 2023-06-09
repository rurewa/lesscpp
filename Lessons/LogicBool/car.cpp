// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Программа определения возможности езды на автомобиле
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha;
    cout << "Можно ли ехать на машине?" << endl;
    bool motor; // true
    bool transmission; // true
    bool ligh; // true
    bool drive; // false
    cout << "Исправен ли мотор? ";
    cin >> motor;
    cout << "Исправлена ли трансмиссия? ";
    cin >> transmission;
    cout << "Исправна ли лампа левого габарита? ";
    cin >> ligh;
    drive = (ligh || motor) && (transmission && motor);
    cout << "Машина может ехать " << drive << endl;
    return 0;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-