// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура и виды инициализации
// justStruct.cpp Struct
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
    // x, y, z - поля структуры
};
// Затем это
struct AxisesTwo // Инициализация членов структур
{
    double x = 2.4;
    double y = 3.1;
    double z = 4.8;
};
// Затем это
struct AxisesThree
{
    double x;
    double y;
    double z;
};

struct Person // Структура с переменными разных типов
{
    string name;
    short age;
    double growth; // Рост
};

int main() {
    cout << "Виды инициализации структур\nИнициализация с помощью списка\n";
    AxisesOne axOne {35.13, 1.39, 83.3}; // Инициализация с помощью списка.
    cout << axOne.x << ' ' << axOne.y << ' ' << axOne.z << endl;
    cout << "Инициализация с помощью переменных\n";
    double X = 50.1, Y = 2.45, Z = 0.1;
    AxisesOne xyz {X, Y, Z};
    cout << xyz.x << ' ' << xyz.y << ' ' << xyz.z << '\n';
    cout << "Инициализация полей структур\n";
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
    Person man {"Alex", 46, 170.5}, woman {"Mary", 12, 140.36};
    cout << man.name << ' ' << man.age << ' ' << man.growth << '\n';
    cout << woman.name << ' ' << woman.age << ' ' << woman.growth << '\n';
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
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //