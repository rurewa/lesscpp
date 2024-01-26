// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура и виды инициализации
// worker.cpp Struct
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Worker {
    int id;
    string name;
    string position;
    double salary;
};

int main() {
    cout << "Введите id работника\n";
    Worker person;
    cin >> person.id;
    cout << "Введите имя работника\n";
    getline(cin >> ws, person.name);
    cout << "Введите должность работника\n";
    getline(cin >> ws, person.position);
    cout << "Введите зарплату работника\n";
    cin >> person.salary;
    cout << person.id << ' ' << person.name << ' ' << person.position << ' '
         << person.salary << '\n';
    return 0;
}
// Output
/*
 */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
