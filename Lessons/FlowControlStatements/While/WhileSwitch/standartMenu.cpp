// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример цикла с условием и выбором
// switchMenu.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
using namespace std;

int main() {
    char again = 'y';
    while (again == 'y') {
        cout << "Choice menu 1, 2 or 3" << endl;
        cout << "Menu 1: " << endl;
        cout << "Menu 2 " << endl;
        cout << "Menu 3: " << endl;
        int userMenu = 0;
        cin >> userMenu;
        switch (userMenu)
        {
        case 1:
            cout << "Choice 1" << endl;
            break;
        case 2:
            cout << "Choice 2" << endl;
            break;
        case 3:
            cout << "Choice 3" << endl;
            break;
        default:
            cout << "You have not chosen anything" << endl;
            break;
        }
        cout << "Do you want to continue (y/n)?: " << endl;
        cin >> again;
    }
    cout << "Goodbye!" << endl;
    return 0;
}
// Output:
/*
Chose menu 1, 2 or 3
Menu 1:
Menu 2:
Menu 3:
2
Choise 2
Do you want to continue (y/n)?:
n
Goodbay!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
