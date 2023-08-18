// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Рандом в диапазоне чисел с помощью библиотеки
// randLibre.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <random>
using namespace std;

int main() {
    // Сочетание, подходящее для большинства задач
    //-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    random_device rd;   // недетерминированный генератор
    mt19937 gen(rd());  // механизм рандома.
    //-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    uniform_int_distribution<> dist(3, 6); // Диапазон
    cout << dist(gen) << endl; // pass the generator to the distribution.
    return 0;
}
// Output:
/*
10
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//