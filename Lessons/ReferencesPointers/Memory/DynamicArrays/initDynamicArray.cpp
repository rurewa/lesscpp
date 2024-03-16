//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Инициализация динамического массива.
// В этой программе есть ошибки cppcheck!
// initDynamicArray.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    int *array = new int[5];
    array[0] = 9; // Это инициализация по-старому
    delete[] array;
    array = nullptr;
    int *dynArr = new int[5] {2, 7, 5, 3, 1}; // По-новому
    cout << dynArr << '\n';
    delete[] dynArr;
    /* Несоответствующее распределение и освобождение памяти! Надо исправить */
    dynArr = nullptr;
    return 0;
}
/*
Проверить потенциальные угрозы утечки памяти и висячие указатели можно командами:
1. clang-tidy main.cpp -- -Wall -std=c++14 -x c++
2. valgrind --leak-check=full ./main.bin
3. cppcheck main.cpp
*/
// Д.З.
// Output
/*

*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-