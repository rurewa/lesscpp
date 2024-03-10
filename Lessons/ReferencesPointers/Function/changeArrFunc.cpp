// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Указатели и функции
// funcRefPoint.cpp
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

/*
1. Во многих случаях при вычислении фиксированный массив распадается (неявно преобразовывается) в казатель на
первый элемент массива;
2. Фиксированный массив знает свою длину, а указатель на него - нет;
*/

void changeArray(int *ptr) { // Параметр ptr содержит копию адреса массива
    *ptr = 5; // Поэтому изменение элемента массива приведёт к изменению фактического массива
}

int main() {
    int array[] {1, 2, 3, 4, 4, 9, 15, 25};
    cout << "Значение элемента под индексом 0: " << array[0] << '\n';
    changeArray(array);
    cout << "Новое значение элемента под индексом 0: " << array[0] << '\n';
    return 0;
}
// Output
/*
Значение элемента под индексом 0: 1
Новое значение элемента под индексом 0: 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //