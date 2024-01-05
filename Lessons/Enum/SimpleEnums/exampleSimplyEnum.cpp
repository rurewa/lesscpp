// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример использования перечисления для возврата кодов
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

enum ParseResult { // Рассматривается как int
    SUSSES = 0,
    IS_LESS = -1,
    IS_MOST = -2
};

ParseResult compareValue(int a, int b) { // Тип enum применяется к функции
    if (a < b) { return IS_LESS; }
    if (a > b) { return IS_MOST; }
    return SUSSES;
}

int main() {
    cout << "Enter your first num: ";
    int userFirstNum{0};
    cin >> userFirstNum;
    cin.ignore(32767, '\n');
    cout << "Enter your seconf num: ";
    int userSecondNum{0};
    cin >> userSecondNum;
    cin.ignore(32767, '\n');

    cout << compareValue(userFirstNum, userSecondNum) << '\n';
    if (compareValue(userFirstNum, userSecondNum) == SUSSES) {
        cout << "Is Eual!\n";
    }
    else {
        cout << "Is not Equal!\n";
    }

    return 0;
}

/* Output:
Enter your first num: 5
Enter your seconf num: 6
-1
Is not Equal!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//