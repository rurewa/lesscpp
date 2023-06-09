// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение строк или символов
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

int main() {
    cout << "Enter your Name: ";
    string firstName;
    getline(cin, firstName);
    cout << "Enter last Name: ";
    string lastName;
    getline(cin, lastName);
    string fullName = firstName + lastName;
    float countLetters = fullName.length(); // вычисляем размер строки после сложения
    cout << "Enter your age: ";
    int age = 0;
    cin >> age;
    cin.ignore(32767, '\n');
    float result = age / countLetters;
    cout << "Age: " << age << " Count letters: " << countLetters << " Resutl: " << result << endl;
    return 0;
}
/* Output:
Enter your Name: Alex
Enter last Name: Ozzi
Enter your age: 44
Age: 44 Count letters: 8 Resutl: 5.5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
