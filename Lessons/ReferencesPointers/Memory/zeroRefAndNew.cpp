//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Нулевые указатели и динамическое выделение памяти
// zeroRefAndNew.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr; // Инициализировали указатель
    if (!ptr) { // Проверили, если ему не выделена динамическая память
        ptr = new int; // то выделяем её
    }
    delete ptr;
    // Если ptr не является нулевым, то динамически выделеная переменная будет удалена.
    // Если значением указателя является нуль, то ничего не произойдёт
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