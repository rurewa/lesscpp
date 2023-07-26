// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Всё о getline()
//
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string mystr;
    cout << "Как твоё имя? ";
    cin >> mystr;
    //cin >> mystr; // Cin заканчивается на первом же пробеле!
    getline (cin, mystr); // Getline понимает пробелы и может целые предложения!
    cout << "Привет " << mystr << ".\n";
    cout << "Какой твой любимый фрукт? ";
    getline (cin, mystr);
    cout << "Я тоже люблю " << mystr << '\n';

    /* string str;
    float price = 0;
    int quantity = 0;

    cout << "Введите цену: ";
    getline (cin, str);
    stringstream(str) >> price; // Переводим строку в числа
    cout << "Введите количество: ";
    getline (cin, str);
    stringstream(str) >> quantity;
    cout << "Всего: " << price * quantity << endl; */

    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//