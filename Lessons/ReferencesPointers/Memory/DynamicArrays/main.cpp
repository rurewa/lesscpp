//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Инициализация динамического массива
// В этой программе есть ошибки cppcheck!
// expDynamicArray.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    //int *dynArr1 = new int[] {1, 2, 3}; // Неявное указание длины массива. Не хорошо!
    int *dynArr2 = new int[3] {1, 2, 3 }; // Явное указание длины массива
    delete[] dynArr2;
    //dynArr2 = nullptr;
    /* Несоответствующее распределение и освобождение памяти! Надо исправить */
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