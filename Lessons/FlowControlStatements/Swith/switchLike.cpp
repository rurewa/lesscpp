// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа, определяющяя предпочтения пользователя
// likeBrowsers.cpp SwitchCase
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << "\nКакой браузер вам больше всего нравится? Введите 1,2,3 или 4\n";
    cout << "1 - FireFox\n";
    cout << "2 - Chrome\n";
    cout << "3 - Edge\n";
    cout << "4 - Opera\n";
    short userChoise = 0;
    cin >> userChoise;
    switch (userChoise)
    {
        case 1:
            cout << "Вам нравится FireFox!\n";
            break;
        case 2:
            cout << "Вам нравится Chrome!\n";
            break;
        case 3:
            cout << "Вам нравится Edge!\n";
            break;
        case 4:
            cout << "Вам нравится Opera!\n";
            break;
        default:
            cout << "Вам ничего не нравится?\n";
            break;
    }
    return 0;
}
// Output:
/*
Какой браузер вам больше всего нравится? Введите 1,2,3 или 4
1 - FireFox
2 - Chrome
3 - Edge
4 - Opera
2
Вам нравится Chrome!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
