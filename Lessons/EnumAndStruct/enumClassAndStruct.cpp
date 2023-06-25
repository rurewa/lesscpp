// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структуры и перечисление
// enumClassAndStruct.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Position
{ // Используется как список наименований должностей
    manager,
    programmer,
    director
};

struct Person
{ // Используется как свойства персоны в базе данных
    int id;
    string name;
    short age;
    Position pos;
};

int main() {
    cout << "Enter position: ";
    int idPosition;
    cin >> ws >> idPosition;
    string personPosition;
    if (idPosition == 0) {
        Person alex {0, "Alex", 46, Position::manager};
        personPosition = "Manager";
        cout << alex.id << ' ' << alex.name << ' ' << alex.age
             << ' ' << personPosition << '\n';
    }
    else if (idPosition == 1) {
        Person gleb {1, "Gleb", 26, Position::programmer};
        personPosition = "Programmer";
        cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age
             << ' ' << personPosition << '\n';
    }
    else if (idPosition == 2) {
        Person andry {2, "Andry", 36, Position::director};
        personPosition = "Director";
        cout << andry.id << ' ' << andry.name << ' ' << andry.age
             << ' ' << personPosition << '\n';
    }
    else {
        personPosition = "Unknown";
        cout << personPosition << '\n';
    }
    return 0;
}
/* Output:
Enter position: 2
2 Andry 36 Director
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//