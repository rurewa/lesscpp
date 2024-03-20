//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Динамический массив. Операторы new и delete[]
// dynamicArray.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    puts("Введите размер массива");
    int lenght = 0; // В данном случае, эта переменная не обязательно должна быть константой
    cin >> lenght;
    int *array = new int[lenght];
    cout << "Адрес массива " << array << " размер массива " << sizeof(array) << '\n';
    // Как определить размер динамического массива?
    array[0] = 7;
    delete[] array; // Освобождаем выделенную массиву память
    array = nullptr; // Удаляем "висячий" указатель
    // delete[] array и  array = nullptr - это очистка мусора?
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
Введите размер массива
12
Адрес массива 0x15b36d0 размер массива 8
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-