// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример рандома, конструкции Switch..Case и цвета по ANCI
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
            cout << "\e[41m   \e[0m" << endl;
            break;
        case 2:
            cout << "\e[42m   \e[0m" << endl;
            break;
        case 3:
            cout << "\e[43m   \e[0m" << endl;
            break;
        case 4:
            cout << "\e[44m   \e[0m" << endl;
            break;
        case 5:
            cout << "\e[45m   \e[0m" << endl;
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