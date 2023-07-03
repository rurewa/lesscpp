// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структуры и перечисление
// searchById.cpp
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
    /* cout << "Введите id для поиска работника\n";
    //Person alex {0, "Alex", 23, Position::manager};
    Person alex {0, "Alex", 23, Position::manager};
    Person gleb {1, "Gleb", 20, Position::programmer};
    Person andry {2, "Andry", 21, Position::director};
    int idPerson = 0;
    string personPosition;
    cin >> ws >> idPerson;
    if (idPerson == alex.id) {
        personPosition = "Manager";
        cout << alex.id << ' ' << alex.name << ' ' << alex.age << ' ' << personPosition << ' ' << (int)alex.pos << endl;
    }
    else if (idPerson == gleb.id) {
        personPosition = "Programmer";
        cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age << ' ' << personPosition << ' ' << (int)gleb.pos << endl;
    }
    else if (idPerson == andry.id) {
        personPosition = "Director";
        cout << andry.id << ' ' << andry.name << ' ' << andry.age << ' ' << personPosition << ' ' << (int)andry.pos << endl;
    }
    else {
        personPosition = "Unknow";
        cout << personPosition << '\n';
    } */
    bool exit = false;
    int idPosition = 0;
    string personPosition;
    Person alex {0, "Alex", 46, Position::manager};
    Person gleb {1, "Gleb", 26, Position::programmer};
    Person andry {2, "Andry", 36, Position::director};
    do {
        cout << "Введите id для поиска: ";
        cin >> ws >> idPosition;
        switch (idPosition)
        {
        case 0:
            personPosition = "Manager";
            cout << alex.id << ' ' << alex.name << ' ' << alex.age
                << ' ' << personPosition << '\n';
            break;
        case 1:
            personPosition = "Programmer";
            cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age
                << ' ' << personPosition << '\n';
            break;
        case 2:
            personPosition = "Director";
            cout << andry.id << ' ' << andry.name << ' ' << andry.age
                << ' ' << personPosition << '\n';
            break;
        default:
            personPosition = "Unknown";
            cout << personPosition << '\n';
            break;
        }
        cout << "Продолжить поиск? 1 - да, 0 - нет\n";
        cin >> ws >> exit;
    } while (exit);
    
    return 0;
}
// Задание 1
/* Изменить эту программу, чтобы вместо if else был switch case*/
// Задание 2
/* После того, как вместо if алгоритм программы будет организован на switch case нужно её зациклить с
помощью do while, чтобы программа предлагала пользователю продолжить или закончить поиск по id.
В качестве условия выхода из цикла должна быть будевая переменная, которая принимает только 0 или 1.
Пример вывода модернизированной программы:
Введите id для поиска: 0
0 Alex 46 Manager
Продолжить поиск? 1 - да, 0 - нет
1
Введите id для поиска: 2
2 Andry 36 Director
Продолжить поиск? 1 - да, 0 - нет
0
*/
/* Output:
Введите id для поиска: 66
Unknown
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//