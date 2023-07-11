// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление и вложенные структуры
// workers.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Type { secretary, manager, labourer };

struct Date
{
    int day;
    int month;
    int year;
};

struct Emploee
{
    int id;
    float salary;
    Type worker;
    Date date;
};

int main() {
    Emploee job1;
    cout << "Введите id сотрудника ";
    cin >> ws >> job1.id;
    cout << "Введите 1-ю букву должности работника ";
    char typJob;
    cin >> typJob;
    switch (typJob)
    {
    case 's':
        job1.worker = Type::secretary;
        break;
    case 'm':
        job1.worker = Type::manager;
        break;
    case 'l':
        job1.worker = Type::labourer;
        break;
    default:
        break;
    }
    string post;
    switch (job1.worker)
    {
    case Type::secretary:
        post = "Секретарь";
        break;
    case Type::manager:
        post = "Менеджер";
        break;
    case Type::labourer:
        post = "Рабочий";
        break;
    default:
        break;
    }
    cout << "Укажите зарплату работника ";
    cin >> ws >> job1.salary;
    cout << "Укажите дату приёма на работу ";
    cin >> job1.date.day >> job1.date.month >> job1.date.year;
    cout << "id работника: " << job1.id << ", должность: " << post
         << ", зарплата: " << job1.salary << ", принят на работу: "
         << job1.date.day << '.' << job1.date.month << '.'
         << job1.date.year << endl;
}
// Output:
/*
Введите id сотрудника 0
Введите 1-ю букву должности работника m
Укажите зарплату работника 70000
id работника: 0, должность: Менеджер, зарплата: 70000
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//