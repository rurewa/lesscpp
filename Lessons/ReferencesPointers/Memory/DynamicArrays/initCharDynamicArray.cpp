//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Инициализация динамического массива
// В этой программе есть ошибки cppcheck!
// initCharDynamicArray.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    char *array =  new char[14] {"Hello!"}; // На некоторых версиях c++ так может не сработать!
    cout << array << endl;
    delete[] array;
    array = nullptr;
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