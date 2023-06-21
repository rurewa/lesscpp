// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура и виды инициализации
// Struct justStruct.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Структура - произвольный тип данных.
// Под структуру, так же как и по enum, не выделяется память

struct AxisesOne
{
    double x;
    double y;
    double z;
    // x, y, z - это члены (поля) структуры
};

struct AxisesTwo
{
    double x = 2.4;
    double y = 3.1;
    double z = 4.8;
};

struct AxiesThree
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

int main() {
    cout << "Виды инициализации структур\nИнициализация с помощью списка\n";
    AxisesOne axOne {35.13, 1.39, 83.3};
    cout << axOne.x << ' ' << axOne.y << ' ' << axOne.z << '\n';
    cout << "Статическая инициализация структуры\n";
    AxisesTwo axTwo;
    cout << axTwo.x << ' ' << axTwo.y << ' ' << axTwo.z << '\n';
    cout << "Инициализация пользовательским вводом\n";
    double numX, numY, numZ;
    cout << "Введите 3-и значения для x, y, z\n";
    cin >> numX >> numY >> numZ;
    AxiesThree axThree {numX, numY, numZ};
    cout << axThree.x << ' ' << axThree.y << ' ' << axThree.z << '\n';
    cout << "Повторное использовение имеющейся структуры\n";
    AxisesOne axRepl {numX, numY, numZ};
    cout << "Содержимое AxisesOne " << axRepl.x << ' ' << axRepl.y << ' ' << axRepl.z << '\n';
    cout << "Структура с разными типами переменных внутри\n";
    Person man {"Alex", 46, 165.5}, woman {"Mary", 12, 140.36};
    cout << man.name << ' ' << man.age << ' ' << man.growth << '\n';
    cout << woman.name << ' ' << woman.age << ' ' << woman.growth << '\n';
    return 0;
}
// Output
/*
Виды инициализации структур
Инициализация с помощью списка
35.13 1.39 83.3
Статическая инициализация структуры
2.4 3.1 4.8
Инициализация пользовательским вводом
Введите 3-и значения для x, y, z
3
5
7
3 5 7
Повторное использовение имеющейся структуры
Содержимое AxisesOne 3 5 7
Структура с разными типами переменных внутри
Alex 46 165.5
Mary 12 140.36
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //