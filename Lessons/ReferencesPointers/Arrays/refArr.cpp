// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Указатели и массивы
// arrRefPoint.cpp
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    char name[] = "Jonathan";
    int numLowers = 0;
    for (char *ptr = name; ptr != name + sizeof(name); ++ptr) {
        // name + sizeof(name) - осталось не понятным, зачем нужно 18 ?
        switch (*ptr)
        { // Тут перечисленны все гласные алфавита
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            ++numLowers;
        }
    }
    cout << name << " имеет " << numLowers << " гласных.\n";
    return 0;
}
// Output
/*
Jonathan имеет 3 гласных.
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //