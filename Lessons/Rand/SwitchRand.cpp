// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример рандома и конструкции Switch..Case
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                   // Инициализация генератора
    int secretNum = 1 + (rand() % 5);
    switch (secretNum)
    {
        case 1:
            cout << "Первый" << endl;
            break;
        case 2:
            cout << "Второй" << endl;
            break;
        case 3:
            cout << "Третий" << endl;
            break;
        case 4:
            cout << "Четвёртый" << endl;
            break;
        case 5:
            cout << "Пятый" << endl;
            break;
        default:
            break;
    }
    return 0;
}
// Output:
/*
Четвёртый
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//