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
        cout << "Choise menu 1, 2 or 3" << endl;
        cout << "Menu one: " << endl;
        cout << "Menu two: " << endl;
        cout << "Menu three: " << endl;
        int userMenu = 0;
        cin >> userMenu;
        switch (userMenu)
        {
        case 1:
            cout << "You choise one" << endl;
            break;
        case 2:
            cout << "You choise two" << endl;
            break;
        case 3:
            cout << "You choise three" << endl;
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
Menu one:
Menu two:
Menu three:
2
You chose two
Do you want to continue (y/n)?:
n
Goodbay!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
