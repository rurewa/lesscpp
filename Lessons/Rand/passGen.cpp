//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Генератор числовых паролей в диапазоне
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    auto password = 0;
    cout << "Программа генерации паролей\n";
    cout << "Введите диапазон пароля до 10-и значного, но не меее 3: ";
    char again = 'y';
    short range = 0;
    cin >> range;
    if (range > 2 && range < 11) {
        while (again != 'n') {
            for (int i = 0; i < range; ++i) {
                password = 1 + (rand() % 9);
                cout << password;
            }
            cout << "\nЖелаете продолжить? [y/n]: ";
            cin >> again;
        }
    }
    else {
        cout << "Вне диапазона!" << endl;
        main();
    }
    return 0;
}
// Output
/*
Введите диапазон пароля до 10-и значного, но не меее 3: 11
Вне диапазона!
Программа генерации паролей
Введите диапазон пароля до 10-и значного, но не меее 3: 10
1453616318
Желаете продолжить? [y/n]: n
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
