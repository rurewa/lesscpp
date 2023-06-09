// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пользовательский ввод в функции
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int getValueFromUser();

int main() {
    int a = getValueFromUser();
    int b = getValueFromUser();
    cout << a << " + " << b << " = " << a + b << endl;

    return 0;
}

int getValueFromUser() {
    cout << "Введите целое число: ";
    int x = 0;
    cin >> x;
    return x;
}
// Output:
/*
Введите целое число: 25
Введите целое число: 25
25 + 25 = 50
user@user-De
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
