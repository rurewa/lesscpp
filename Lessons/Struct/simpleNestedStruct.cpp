// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример вложенной структуры
// Struct nestedStruct.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Employee { // Сотрудник
    short id;
    string name;
    int age;
    double salary; // Зарплата
};

struct Company {
    Employee CEO; // Исполнительный директор
    string сompany;
    int numberOfEmployees; // Количество сотрудников
};

int main() {
    // Инициализируем члены структуры
    Company compName {{ 3, "Ivan", 35, 155000.0f }, "JFC", 7};
    cout << "Компания: " << compName.сompany << endl;
    cout << "Количество сотрудников: " << compName.numberOfEmployees << endl;
    cout << "id исполнительного директора: " << compName.CEO.id << endl;
    cout << "Имя исполнительного директора: " << compName.CEO.name << endl;
    cout << "Возраст исполнительного директора: " << compName.CEO.age << endl;
    cout << "Зарплата исполнительного директора: " << compName.CEO.salary << endl;
    /*
    cout << "Введите название компании\n";
    string companyName;
    getline(cin >> ws, companyName);
    cout << "Введите кол.сотрудников\n";
    short numEmp = 0;
    cin >> ws >> numEmp;
    cout << "Введите имя исполнительного директора\n";
    string ceoName;
    getline(cin >> ws, ceoName);
    cout << "Введите id исполнительного директора\n";
    short id = 0;
    cin >> ws >> id;
    cout << "Введите возраст исполнительного директора\n";
    int age = 0;
    cin >> ws >> age;
    cout << "Введите зарплату исполнительного директора\n";
    double salary = 0.0;
    cin >> ws >> salary;
    Company nameComp {{ id, ceoName, age, salary }, companyName, numEmp};
    cout << nameComp.сompany << ' ' << nameComp.numberOfEmployees << ' ' << nameComp.CEO.id
         << ' ' << nameComp.CEO.name << ' ' << nameComp.CEO.age << nameComp.CEO.salary << endl; */
    return 0;
}
/* Output:
Компания: JFC
Количество сотрудников: 7
id исполнительного директора: 3
Имя исполнительного директора: Ivan
Возраст исполнительного директора: 35
Зарплата исполнительного директора: 155000
*/
// Задание 1
/* Добавить в эту программу ещё одну компанию с любым названием и похожими данными, что и JFC*/
// Задание 2
/*Ввести в программу пользовательский ввод всех данных: Компания, Количество сотрудников, id исполнительного директора,
Имя исполнительного директора, Возраст исполнительного директора, Зарплата исполнительного директора
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
