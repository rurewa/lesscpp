// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// 
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    static bool flag = false;
    bool input;
    cin >> input;
    if (!flag) {
        cout << "первый" << endl;
        if(input == true) {
            flag = true;
        }
        else {
            puts("Повтори ввод");
            flag = false;
            main();
        }
    }
    cout << "второй" << endl;
    return 0;
}
// Д.З.
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
