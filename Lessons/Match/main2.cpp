// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Арифметика
// ari.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
#include <unistd.h>
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
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    a = 7, b = 9; // Переинициализация переменных
    result = a * b;
    cout << "Результат вычисления a * b: " << result << endl;
    a = 12, b = 2;
    int division = a / b; //
    cout << "Результат вычисления a / b: " << division << endl;
    cout << "Правило ассоциации\n";
    double val = 3 + 5 - (1 * (5 / 3));
    cout << "Значение val: " << val << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    int a1 = 5, a2 = 6;
    cout << (a1 += a2) << endl; // Сложение с присваиванием
    // a1 = a1 + a2;
    cout << (a1 -= a2) << endl; // Вычитание с присваиванием
    // a1 = a1 - a2;
    cout << (a1 *= a2) << endl; // Произведение с присваиванием
    cout << (a1 /= a2) << endl; // Деление с присваиванием
    sleep(2);
    cout << "Сигнал " << '\7' << '\n';
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