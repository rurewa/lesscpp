// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Проверка логина и пароля
// checkPassLogIncompleteIf.cpp IFELSE
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main() {
    const string LOGIN = "rus";
    const short PASSWORD = 12345;
    cout << "Введите логин: ";
    string userLogin;
    getline(cin >> ws, userLogin);
    cout << "Введите пароль: ";
    int userPassword = 0;
    cin >> ws >> userPassword;
    if (LOGIN != userLogin || PASSWORD != userPassword) {
        puts("Ошибка! Попробуйте снова.");
        main();
    }
    if (LOGIN == userLogin && PASSWORD == userPassword) {
        puts("Верно! Пропускаю");
    }
    return 0;
}
// Output
/*
Введите логин: rus
Введите пароль: 123
Ошибка! Попробуйте снова.
Введите логин: rus
Введите пароль: 1234
Ошибка! Попробуйте снова.
Введите логин: rus
Введите пароль: 12345
Верно! Пропускаю
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-