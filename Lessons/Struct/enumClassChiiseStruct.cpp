// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример использования перечислений, пользовательского ввода и структуры
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

enum class Position { // Используется как список наименований
    manager,
    programmer,
    director
};

struct Person { // Используется как свойства персоны в базе данных
    int id{0};
    string name;
    int age{0};
};


int main() {
    cout << "Enter position: ";
    int idPosition;
    cin >> idPosition;
    cin.ignore(32767, '\n');
    string personPosition;
    if (idPosition == 0) { Position position = Position::manager; cout << static_cast<int>(position) << endl; personPosition = "manager"; }
    if (idPosition == 1) { Position position = Position::programmer; cout << static_cast<int>(position) << endl; personPosition = "programmer"; }
    if (idPosition == 2) { Position position = Position::director; cout << static_cast<int>(position) << endl; personPosition = "director"; }
    Person sany = {1, "Alex", 25};
    cout << "id: " << sany.id << ", name: " << sany.name << ", age: " << sany.age << ", position: " << personPosition << endl;

    return 0;
}
/* Output:
Enter position: 1
1
id: 1, name: Alex, age: 25, position: programmer
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//