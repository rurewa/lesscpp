// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Вывод таблицы с помощью стрингов.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

int main() {
    cout << "Таблица с помощью одного стринга:\n";
    string col_row = "|__|__|__|";
    cout << col_row << endl;
    cout << col_row << endl;
    cout << col_row << endl;
    cout << col_row << endl;
    cout << "\nТаблица с помощью 2-х стрингов:\n";
    string col = "|  |  |  |";
    string row = " __ __ __ ";
    cout << col << "\n" << row << endl;
    cout << col << "\n" << row << endl;
    cout << col << "\n" << endl;
    return 0;
}
/* Output:
|  |  |  |
 __ __ __
|  |  |  |
 __ __ __
|  |  |  |
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //