// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Проверка праильности ввода логина и пароля с счётчиком
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    int i = 0;
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
        ++i;
        cout << "Количество попыток: " << i << "\n";
    }
    return 0;
}

/* Output:

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//