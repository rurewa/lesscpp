// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример со строками
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

int main() {
    string name = "Alex";
    cout << "Firstname: " << name << endl; // Простой вывод строки
    cout << "Enter lastname: ";
    string lastName;
    getline(cin, lastName); // Извлечение строки в переменную
    cout << "your lastname: " << lastName << endl;
    return 0;
}

/* Output:
Enter a word: Alex!
Length you word: 5 characters
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
