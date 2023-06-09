// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Массив и указатели
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int arr[] {5, 6, 7, 8};
    // Разыменование массива (переменной array) приведёт к возврату его 1-го
    // элемента - элемента 0
    cout << *arr << '\n';
    char name[] = "John"; // C-style строка тоже массив
    cout << *name << '\n'; // Так же будет получен 0-й элемент
    int *ptr = arr;
    cout << *ptr << '\n'; // Так можно
    cout << sizeof(arr) << " бит" << '\n'; // Возвращает размер в битах
    cout << sizeof(ptr) << " бит" << '\n'; // Размер указателя
    // В примере выше - фиксированный массив знает свою длину, а указатель - нет!
    return 0;
}
// Output
/*
5
J
5
20 бит
8
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //