// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Примеры применения структуры
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Employee { // Сотрудник
    string name;
    short id;
    int age;
    double salary;
};

int main() {
    // Инициализируем члены структуры
    Employee ivan {"Ivan", 0, 27, 75353.17};
    Employee petr {"Petr", 1, 30, 64464.35};
    Employee igor {"Igor", 2, 30, 61456.92};
    // Выводим значения структурных объектов
    cout << "Имя: " << ivan.name << endl;
    cout << "ID: " << ivan.id << endl;
    cout << "Возраст: " << ivan.age << endl;
    cout << "Зарплата: " << ivan.salary << endl;
    // Выполняем арифметические операции с членами структуры
    int averageAge = (ivan.age + petr.age + igor.age) / 3;
    // Печатаем результат вычисления значений членов структур
    cout << "Средний возраст: " << averageAge << endl;

    // Выполняем сравнение членов структур (как обычные переменные)
    if (ivan.salary > petr.salary) {
        cout << "Иван зарабатывает больше, чем Пётр" << endl;
    }
    else if (igor.salary < petr.salary) {
        cout << "Игорь зарабатывает меньше, чем Пётр" << endl;
    }
    else {
        cout << "Иван и Игорь зарабатывают одинаково" << endl;
    }
    // Инициализация пользовательским вводом зарплаты
    /* double salary = 0.0;
    cout << "Введите зарплату работника\n";
    cin >> ws >> salary;
    Employee ivan {"Ivan", 0, 27, salary};
    cout << ivan.name << ' ' << ivan.id << ' ' << ivan.age << ' ' << ivan.salary << endl; */
    return 0;
}
/* Output:
Name: John
ID: 8
Age: 27
Salary: 75345.2
Средний возраст: 29
Иван зарабатывает больше, чем Пётр
*/
// Задание 1
/* В эту программу ввести 4-го сотрудника и произвести с ним арифметику и сравнение с другими*/
// Задание 2
/* В эту программу ввести пользовательский ввод только зарплаты*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//