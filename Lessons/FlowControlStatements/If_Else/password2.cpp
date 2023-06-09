// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Проверка корректности ввода логина и пароля
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    bool flag;
    cout << "Придумайте логин" << endl;
    string login = "user";
    string username;
    cin >> username;
    cout << "Придумайте пароль: ";
    int password;
    cin >> password;
    while (flag != true) {
        cout << "Повторите логин" << endl;
        string repeatUserName;
        cin >> repeatUserName;
        cout << "Повторите пароль: ";
        int repeatPassword;
        cin >> repeatPassword;
        if (username == repeatUserName && password == repeatPassword) {
            cout << "Вам разрешен доступ" << "\n";
            flag = true;
        }
        else {
            cout << "Доступ запрещён!" << "\n";
            flag = false;
        }
    }
    return 0;
}
// Output:
/*
Придумайте пароль: 123
Повторите логин
alex
Повторите пароль: 321
Доступ запрещён!
Повторите логин
alex
Повторите пароль: 123
Вам разрешен доступ
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//