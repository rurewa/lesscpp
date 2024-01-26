// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление и вложенные структуры
// dateEmploee.cpp Struct
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Type { secretary, manager, laborer };

struct Date {
    int day;
    int month;
    int year;
};

struct Emploee {
    int id;
    float salary; // Зарплата
    Type worker;
    Date date;
};

int main() {
    Emploee job1; // Переменные структурного типа Emploee
    cout << "Введите id работника ";
    cin >> ws >> job1.id;
    cout << "Введите 1-ю букву должности работника ";
    char typeJob;
    cin >> typeJob;
    /* cout << "Введите дату приёма на работу\n";
    cin >> job1.date.day >> job1.date.month >> job1.date.year; */
    string post;
    switch (typeJob)
    {
    case 's':
        job1.worker = Type::secretary;
        break;
    case 'm':
        job1.worker = Type::manager;
        break;
    case 'l':
        job1.worker = Type::laborer;
        break;
    default:
        break;
    }

    switch (job1.worker)
    {
    case Type::secretary:
        post = "Секретарь";
        break;
    case Type::manager:
        post = "Менеджер";
        break;
    case Type::laborer:
        post = "Рабочий";
        break;
    default:
        break;
    }

    cout << "Введите зарплату работника ";
    cin >> ws >> job1.salary;
    cout << "id работника: " << job1.id     << ", Должность: " << post
         << ", Зарплата: "   << job1.salary << endl;
    /* cout << "id работника: " << job1.id << " Дата приёма на работу "
         << job1.date.day << '.' << job1.date.month << '.' << job1.date.year << ", Должность: " << post
         << ", Зарплата: " << job1.salary << endl; */
    return 0;
}
// Output:
/*
Введите id работника 1
Введите 1-ю букву должности работника p
Введите зарплату работника 200000
id работника: 1, Должность: , Зарплата: 200000
*/
// Задание
/*Дописать эту программу, чтобы можно было вводить дату принятия на работу:
day, month, year
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//