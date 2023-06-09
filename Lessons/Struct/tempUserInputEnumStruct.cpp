// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример использования перечислений, пользовательского ввода и структуры
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

enum class Position{ // Position
    manager,
    programmer,
    director
};

struct tempUserInputEnumStruct {
    int id;
    string userName;
    //Position position;
    int age;
};

int main() {
    cout << "Enter id: ";
    int id;
    cin >> id;
    cin.ignore(32767, '\n');
    cout << "Enter user name: ";
    string userName;
    getline(cin, userName);
    cout << "Enter age: ";
    int age;
    cin >> age;
    cin.ignore(32767, '\n');
    tempUserInputEnumStruct alex = {id, userName, age};
    cout << "id: "<< alex.id << " name: " << alex.userName << ", age: " << alex.age << endl;

    return 0;
}
/* Output:
Enter id: 1
Enter user name: Alex
Enter age: 25
id: 1 name: Alex, age: 25
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
