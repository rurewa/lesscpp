// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Разработать интерактивную программу генератора числового пароля,
// от 3-х до 10 знаков по желанию пользователя.
// generPasswords1.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int wishUser = 0;
    int secret = 0;
    cout << "Введите количество знаков нового пароля от 3 до 10: ";
    cin >> ws >> wishUser;
    while (wishUser > 3 && wishUser <= 10) {
        for (int i = 0; i != wishUser; ++i) {
            secret = 0 + (rand() % wishUser);
            cout << secret;
        }
        cout << endl;
        exit(0);
    }
    cout << "Вы вышли за рамки диапазона!\n";
    return 0;
}
// Output:
/*
Введите количество знаков нового пароля от 3 до 10: 347467
Вы вышли за рамки диапазона!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//