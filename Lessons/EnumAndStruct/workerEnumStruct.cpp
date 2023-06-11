// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структура и перечисление
// V 2.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/* struct Date {
    int day;
    int month;
    int year;
}; */

enum class Type { secretary, manager, laborer };

struct Emploee {
    int id;
    float salary; // Зарплата
    Type worker;
    //Date date;
};

int main() {
    Emploee job1; // Переменные структурного типа Emploee
    cout << "Введите id работника ";
    cin >>job1.id;
    cout << "Введите 1-ю букву должности работника ";
    char typeJob;
    cin >> typeJob;
    string post;
    switch (typeJob)
    {
    case 's':
        job1.worker = Type::secretary;
        break;
    case 'm':
        job1.worker = Type::manager;
        break;
    case 'w':
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
    cin >> job1.salary;
    cout << "id работника: " << job1.id << ", Должность: " << post  << ", Зарплата: " << job1.salary << endl;
    return 0;
}
// Output:
/*
Введите id работника 1
Введите 1-ю букву должности работника s
Введите зарплату работника 50000
id работника 1 Должность Секретарь Зарплата 50000
*/
// Задание
/*Дописать эту программ, чтобы можно было вводить даты принятия на работу*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//