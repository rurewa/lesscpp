// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Разработать интерактивную программу-валидатор, которая которая в цикле
// проверяет правильность ввода логина и пароля и считает количество
// неправильных попыток.
// checkLoginPassword3.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    string login = "rus";
    int password = 12345;
    int notCorrect = 0;
    int count = 0;
    string inputUser;
    int inputPassword = 0;
    while (count != 3) {
        cout << "Введите логин: ";
        getline(cin >> ws, inputUser);
        cout << "Введите числовой пароль: ";
        cin >> ws >> inputPassword; // Неплохо бы сюда добавить защиту от символов!
        while (login == inputUser && password == inputPassword) {
            cout << "Правильно!\n";
            cout << "Неправильных попыток: " << notCorrect << endl;
            exit(0);
        }
        cout << "Не правильно!\n";
        ++notCorrect;
        ++count;
    }
    cout << "Вы исчерпали лимит попыток!\n"
    << ' ' << "Количество неправильных попыток: " << notCorrect << endl;
    return 0;
}
// Output:
/*
Введите логин: rus
Введите пароль: 1231346
Не правильно!
Введите логин: rus
Введите пароль: 12345
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//