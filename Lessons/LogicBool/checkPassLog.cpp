// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Проверка логина и пароля
// checkPassLog.cpp Bools/
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
    cout << boolalpha << ((LOGIN == userLogin && PASSWORD == userPassword) ? true : false) << endl;
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