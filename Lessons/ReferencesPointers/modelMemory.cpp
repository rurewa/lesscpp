// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Модель памяти компьютера
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Статическая память -  вней функции, константы и текст
// Куча (Динамическая память)
// Стек - локальные переменные

static int snail = 3; // В Статической памяти

int main() {
    int monkey = 10; // В Стеке
    int *parrot = new int(5); // В Куче
    delete parrot; // Очищаем Кучу и Стек
    cout << snail << ' ' << monkey << '\n';
    return 0;
}
// Output
/*
3 10
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //