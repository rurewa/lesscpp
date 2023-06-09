// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
//  Сортировка строк класса String
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "seva";
    cout << " Количество символов с троке: " << str << " = " << str.length() << endl;
    sort(str.begin(), str.end()); // Не пойми в каком порядке
    cout << str << endl;
    random_shuffle(str.begin(), str.end()); // В обратном порядке
    cout << str << endl;
    srand(time(0));
    random_shuffle(str.begin(), str.end()); // В случайном порядке
    cout << str << endl;
    return 0;
}
/* Output:

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //