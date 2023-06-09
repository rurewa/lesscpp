// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Разработать интерактивную программу-валидатор, которая проверяет правильность
// ввода логина и пароля.
// checkLoginPassword.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    string login = "rus";
    int password = 12345;
    cout << "Введите логин: ";
    string inputUser;
    getline(cin >> ws, inputUser);
    cout << "Введите пароль: ";
    int inputPassword = 0;
    cin >> ws >> inputPassword;
    while (login == inputUser && password == inputPassword) {
        cout << "Правильно!\n";
        exit(0);
    }
    /* if (login == inputUser && password == inputPassword) {
        cout << "Правильно!\n";
        exit(0);
    }
    else {
        cout << "Не правильно!\n";
    } */
    cout << "Не правильно!\n";
    return 0;
}
// Output:
/*
Введите логин: rus
Введите пароль: 12345
Правильно!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//