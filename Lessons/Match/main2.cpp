// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Арифметика
// a.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
using namespace std;

int main() {
    cout << "Среднее арифметическое\n";
    int average = 0, firstNum = 0, secondNum = 0, thirdNum = 0;
    cout << "Введите три натуральных числа: ";
    cin >> firstNum >> secondNum >> thirdNum;
    average = (firstNum + secondNum + thirdNum) / 3;
    cout << average << endl;
    cout << "Нахождение общего сопротивления в последовательной цепи\n";
    cout << "Введите 2-а значения: ";
    float total = 0, firstResistance = 0, secondResistance = 0;
    cin >> firstResistance >> secondResistance;
    total = firstResistance + secondResistance;
    cout << total << endl;
    cout << "Нахождение общего сопротивления в параллельной цепи\n";
    cout << "Введите 2-а значения: ";
    cin >> firstResistance >> secondResistance;
    total = (firstResistance * secondResistance) / (firstResistance + secondResistance);
    cout << total << endl;
    cout << "Закон Ома\n";
    double current = 0, volt = 0, resistance = 0;
    cout << "Введите 2-а значения: ";
    cin >> volt >> resistance;
    current = volt / resistance;
    cout << current << endl;
    cout << "Площадь прямоугольника\n";
    double square = 0, aSide = 0, bSide = 0;
    cout << "Введите 2-а значения: ";
    cin >> aSide >> bSide;
    square = aSide * bSide;
    cout << square << endl;
    // ДЗ - найти периметр прямоугольника
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