// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игрок 1 и 2
// players.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int player = 1, choice = 0;
    bool flag = false;
    if (!flag) {
        cout << "Ход игрока " << player << ' ';
        cin >> ws >> choice;
        ++player;
        if (choice == 9) { return 0; }
        cout << "Ход игрока " << player << ' ';
        cin >> ws >> choice;
        main();
    }
    return 0;
}
// Д.З.
// Output:
/*
Ход игрока 1 9
Ход игрока 2 9
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
