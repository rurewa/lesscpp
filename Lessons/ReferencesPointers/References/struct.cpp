// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Ссылки в структурах
// struct.cpp
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

struct Something
{
    int   value1;
    float value2;
};

struct Other
{
    Something something;
    int otherVlue;
};

int main() {
    Other other;
    other.something.value1 = 7; // Обычно так
    cout << other.something.value1 << '\n';
    int &ref = other.something.value1; // А можно и так (лучше)
    ref = 7; // Меняем значение value1 с помощью ссылки
    cout << ref << '\n';
    float &fref = other.something.value2;
    fref = 15;
    cout << fref << '\n';
    return 0;
}
// Output
/*
7
7
15
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //