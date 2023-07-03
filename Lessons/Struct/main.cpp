// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структура и перечисление. Поиск по id
// Struct searchById.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Position
{ // Список должностей в компании
    manager, programmer, director
};

struct Person
{ // Свойства каждого работника в компании
    int id;
    string name;
    short age;
    Position pos;
};

int main() {
    cout << "Введите id для поиска работника\n";
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
    }
    /* if (idPerson == Position::manager) {
        personPosition = "Manager";
        cout << alex.id << ' ' << alex.name << ' ' << alex.age << ' '
             << personPosition << '\n';
    }
    else if (idPerson == Position::programmer) {
        personPosition = "Programmer";
        cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age << ' ' << personPosition << '\n';
    }
    else if (idPerson == Position::director) {
        personPosition = "Director";
        cout << andry.id << ' ' << andry.name << ' ' << andry.age << ' ' << personPosition << '\n';
    }
    else {
        personPosition = "Unknow";
        cout << personPosition << '\n';
    } */
    /* cin >> ws >> idPerson;
    if (idPerson == 0) {
        personPosition = "Manager";
        cout << alex.id << ' ' << alex.name << ' ' << alex.age << ' '
             << personPosition << '\n';
    }
    else if (idPerson == 1) {
        personPosition = "Programmer";
        cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age << ' ' << personPosition << '\n';
    }
    else if (idPerson == 2) {
        personPosition = "Director";
        cout << andry.id << ' ' << andry.name << ' ' << andry.age << ' ' << personPosition << '\n';
    }cin >> ws >> idPerson;
    if (idPerson == 0) {
        personPosition = "Manager";
        cout << alex.id << ' ' << alex.name << ' ' << alex.age << ' '
             << personPosition << '\n';
    }
    else if (idPerson == 1) {
        personPosition = "Programmer";
        cout << gleb.id << ' ' << gleb.name << ' ' << gleb.age << ' ' << personPosition << '\n';
    }
    else {
        personPosition = "Unknow";
        cout << personPosition << '\n';
    } */
    return 0;
}
// OUTPUT
/*
Введите id для поиска работника
0
0 Alex 23 Manager
*/
// Задание 1
/*
В новом файле переписать эту программу с использованием Switch case
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //