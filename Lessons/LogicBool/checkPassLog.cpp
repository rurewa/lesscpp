// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Проверка логина и пароля
// checkPassLog.cpp Bools/
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

int main() {
    string login = "rus";
    int password = 12345;
    cout << "Введите логин: ";
    string userLogin;
    getline(cin >> ws, userLogin);
    cout << "Введите пароль: ";
    int userPassword = 0;
    cin >> ws >> userPassword;
    cout << boolalpha << ((login == userLogin && password == userPassword) ? true : false) << endl;
}
// Output
/*
Введите логин: rus
Введите пароль: 12345
true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-