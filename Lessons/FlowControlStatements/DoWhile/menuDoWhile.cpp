// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример цикла выбора меню
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int choose = 1;
    do {
        cout << "Пожалуйста, выберите нужный пункт меню: \n";
        cout << "1) Сложение\n";
        cout << "2) Вычитание\n";
        cout << "3) Произведение\n";
        cout << "4) Деление\n";
        cin >> choose;
    }
    while (choose != 1 && choose != 2 && choose != 3 && choose != 4);
    cout << "Вы выбрали: " << choose << endl;
    return 0;
}
// Output:
/*
Пожалуйста, выберите нужный пункт меню:
1) Сложение
2) Вычитание
3) Произведение
4) Деление
4
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
