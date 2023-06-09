// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Строки в c++. Примеры C-style с продолжением на String класс
// beginString.cpp Arrays/String     mkdir String cd String
// mv baginString.cpp beginString.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char mystring[] = "String"; // C-style способ
    cout << mystring << " содержит " << sizeof(mystring) << endl;
    cout << mystring << " содержит " << strlen(mystring) << endl;
    // 7, потому, что автоматически добавляется 0-терминатор для конца строки
    cout << "ADCII-код каждого элемента строки: ";
    for (unsigned index = 0; index < (sizeof(mystring)); ++index) {
        cout << (int)(mystring[index]) << ' ';
    }
    cout << endl;
    cout << "Изменить элемент строки\n";
    mystring[1] = 'v';
    cout << mystring << endl;
    cout << "Строки с помощью класса String\n";
    string str = "seva";
    string more = str;
    cout << "Количество элементов в строке: " << more << " = " << more.length() << endl;
    sort(more.begin(), more.end());
    cout << "Наоборот: " << more << endl;
    cout << "Сложение строк\n";
    string firstName, lastName;
    cout << "Введите ваше имя: ";
    getline(cin, firstName);
    cout << "Введите ваше фамилию: ";
    getline(cin, lastName);
    string con = firstName + lastName;
    cout << con << '\n';
    return 0;
}
/* Output:
String содержит 7
String содержит 6
ADCII-код каждого элемента строки: 83 116 114 105 110 103 0
Изменить элемент строки
Svring
Строки с помощью класса String
Количество элементов в строке: seva = 4
Наоборот: aesv
Сложение строк
Введите ваше имя: Alex
Введите ваше фамилию: Rus
AlexRus
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //