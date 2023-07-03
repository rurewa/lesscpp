// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Арифметика
// ari.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
using namespace std;

int main() {
    // Массив типа char (символьный массив)
    // Массив - коллекция (множество) однотипных элементов
    char strAlex[] = {"Alex"};
    char strProg[] = {"Prorammer"};
    cout << strAlex << '\t' << strProg << endl;
    int sizeArr = (sizeof(strAlex) / sizeof(*strAlex) -1);
    cout << "Размер массива: " << sizeArr << endl;
    string alexStr = "Алекс";
    string alexProg = "Программист";
    string total = alexStr + alexProg;
    cout << total << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    int a = 5, b = 6;
    int result = a + (b - 3);
    cout << result << endl;
    return 0;
}
// OUTPUT
/*
Alex    Prorammer
Размер массива: 4
АлексПрограммист
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
[user@host-251 Match]$ clang++ -Wall main2.cpp -o main2.bin
[user@host-251 Match]$ ./main2.bin
Alex    Prorammer
Размер массива: 4
АлексПрограммист
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
8
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//