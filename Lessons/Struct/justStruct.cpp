// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура и виды инициализации
// Struct justStruct.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Структура - произвольный тип данных. Под неё, как и enum не выделяется память

struct AxisesOne // Сначала делаем это
{
    double x;
    double y;
    double z;
    // x, y, z - члены (поля) структуры
};

// Затем это
struct AxisesTwo // Инициализация членов структур
{
    double x = 2.4;
    double y = 3.1;
    double z = 4.8;
};

struct AxisesThree
{
    double x;
    double y;
    double z;
};

struct Person
{
    string name;
    short age;
    double growth;
};

struct Worker
{
    int id;
    string name;
    string position;
    double salary;
};



int main() {
    cout << "Виды инициализации структур\nИнициализация с помощью списка\n";
    AxisesOne axOne {35.13, 1.39, 83.3}; // Инициализация с помощью списка
    cout << axOne.x << ' ' << axOne.y << ' ' << axOne.z << endl;
    cout << "Инициализация членов структур\n";
    AxisesTwo axTwo;
    cout << axTwo.x << ' ' << axTwo.y << ' ' << axTwo.z << endl;
    cout << "Инициализация пользовательским вводом\n";
    double numX, numY, numZ;
    cout << "Введите 3 значения - x, y и z \n";
    cin >> numX >> numY >> numZ;
    AxisesThree axThree {numX, numY, numZ};
    cout << axThree.x << ' ' << axThree.y << ' ' << axThree.z << endl;
    cout << "Повторное использование структуры\n";
    AxisesOne axRepl {numX, numY, numZ};
    cin >> numX >> numY >> numZ;
    cout << "Содержимое структуры AxisesTwo - " << axRepl.x << ' ' << axRepl.y << ' ' << axRepl.z << '\n';
    cout << "Структура с разными типами данных внутри\n";
    Person man {"Alex", 46, 170.5}, women {"Mary", 12, 140.36};
    cout << man.name << ' ' << man.age << ' ' << man.growth << '\n';
    cout << women.name << ' ' << women.age << ' ' << women.growth << '\n';
    cout << "Введите id работника\n";
    Worker person;
    cin >> ws >> person.id;
    cout << "Введите имя работника\n";
    getline(cin >> ws, person.name);
    cout << "Введите должность работника\n";
    getline(cin >> ws, person.position);
    cout << "Введите зарплату работника\n";
    cin >> ws >> person.salary;
    cout << person.id << ' ' << person.name << ' ' << person.position << ' ' << person.salary << '\n';
    return 0;
}
// Output
/*
Виды инициализации структур
Инициализация с помощью списка
35.13 1.39 83.3
Инициализация членов структур
2.4 3.1 4.8
Инициализация пользовательским вводом
Введите 3 значения - x, y и z
2
5
7
2 5 7
Введите имя работника
Alex
Введите должность работника
am programmer
Введите зарплату работника
120000
111 Alex am programmer 120000
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //