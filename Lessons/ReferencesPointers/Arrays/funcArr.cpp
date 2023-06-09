// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Массив, указатели и функции
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
1. При передачи в функции массивы распадаются на указатели
*/

/* void printSize(int array[]) { // Так нельзя!
    // Тут массив рассматривается как указатель
    cout << sizeof(array) << '\n'; // Будет получен размер указателя, не массива!
} */

void printSize(int *array) {
    cout << sizeof(array) << '\n';
}

// Параметр ptr содержит копию адреса массива
void changeArray(int *ptr) {
    *ptr = 5; // Поэтому изменение элемента массива приведёт к изменению фактического массива
}

int main() {
    int array[] {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sizeof(array) << " байт " << array[0] << '\n'; // Получена длина масива в байтах
    printSize(array); // Получена длина int + 0-й элемент
    // Передача по адресу
    changeArray(array); //
    cout << array[0] << '\n'; // Полчено изменение 0-го элемента массива
    return 0;
}
// Output
/*
32 байт 1
8
32 байт 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //