// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Перечисление и вложенные структуры
// workers.cpp Enum
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Type { SECRETARY, MANAGER, LABOURER };

struct Date
{
    int day;
    int month;
    int year;
};

struct Emploee // Сотрудник
{
    int id;
    float salary;
    Type worker; // Перечисление
    Date date; // 1-я структура
};

int main() {
    Emploee job1;
    cout << "Введите id сотрудника ";
    cin >> ws >> job1.id;
    cout << "Введите 1-ю букву должности работника ";
    char typeJob;
    cin >> typeJob;
    switch (typeJob)
    {
    case 's':
        job1.worker = Type::SECRETARY;
        break;
    case 'm':
        job1.worker = Type::MANAGER;
        break;
    case 'l':
        job1.worker = Type::LABOURER;
        break;
    default:
        cout << "What?\n";
        break;
    }
    string post;
    switch (job1.worker)
    {
    case Type::SECRETARY:
        post = "Секретарь";
        break;
    case Type::MANAGER:
        post = "Менеджер";
        break;
    case Type::LABOURER:
        post = "Рабочий";
        break;
    default:
        cout << "What?";
        break;
    }
    cout << "Укажите зарплату работника ";
    cin >> ws >> job1.salary;
    cout << "Укажите дату приёма на работу ";
    cin >> job1.date.day >> job1.date.month >> job1.date.year;
    cout << "id работника: " << job1.id     << ", должность: " << post
         << ", зарплата: "   << job1.salary << ", принят на работу: "
         << job1.date.day    << '.' << job1.date.month << '.'
         << job1.date.year   << endl;
    return 0;
}
//
// OUTPUT // Возможный результат:
/*
Введите id сотрудника 1
Введите 1-ю букву должности работника s
Укажте зарплату работника 1200000
Укажите дату приёма на работу 12
2
2024
id работника: 1, должность: Секретарь, зарплата: 1.2e+06, принят на работу: 12.2.2024
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //