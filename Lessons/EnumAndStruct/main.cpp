// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структура и перечисление
// 2searchById.cpp Struct
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Position { // Используется как список наименований должностей
    manager,          // 0 по умолчанию
    programmer,
    director
};

struct Person { // Используется как свойства персоны в базе данных
    int id;
    string name;
    short age;
    Position pos;
};

int main() {
    Person alex{0, "Alex", 23, Position::manager};
    Person gleb{1, "Gleb", 20, Position::programmer};
    Person andry{2, "Andry", 21, Position::director};
    int idPerson = 0;
    string personPosition;
    bool exit = false;
    do {
        puts("Введите id для поиска:");
        cin >> ws >> idPerson;
        switch (idPerson)
        {
        case 0:
            personPosition = "Manager";
            cout << alex.id << ' ' << alex.name << ' '
                 << alex.age << ' ' << personPosition << '\n';
            break;
        case 1:
            personPosition = "Programmer";
            cout << gleb.id << ' ' << gleb.name << ' '
                 << gleb.age << ' ' << personPosition << '\n';
            break;
        case 2:
            personPosition = "Director";
            cout << andry.id << ' ' << andry.name << ' '
                 << andry.age << ' ' << personPosition << '\n';
            break;
        default:
            personPosition = "Unknown";
            cout << personPosition << '\n';
            break;
        }
        puts("Желаете продолжить поиск? 1 - да, 0 - нет");
        cin >> exit; // close
    } while (exit);
    return 0;
}
// Output:
/*
Введите id для поиска:
0
0 Alex 23 Manager
Желаете продолжить поиск? 1 - да, 0 - нет
1
Введите id для поиска:
1
1 Gleb 20 Programmer
Желаете продолжить поиск? 1 - да, 0 - нет
1
Введите id для поиска:
2
2 Andry 21 Director
Желаете продолжить поиск? 1 - да, 0 - нет
1
Введите id для поиска:
3
Uniknown
Желаете продолжить поиск? 1 - да, 0 - нет
0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//