// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая структура и виды инициализации
// justStruct.cpp Struct
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
Структура - произвольный тип данных. Для неё, как и для enum не выделяется память.
Структура позволяет сгруппировать переменные разных типов в единое целое.
*/

struct Person // Структура с полями разных типов
{
    string name; // Поле для строк
    short age; // Поле для натуральных чисел
    double growth; // Поле для вещественных чисел. Рост
};

struct Card
{
    int id;
    string name;
    short age;
    char classRoom;
};

int main() {
    cout << "Виды инициализации полей структур\nИнициализация с помощью списка\n";
    cout << "Структура с разными типами данных внутри\n";
    Person man {"Alex", 46, 170.5};
    Person woman {"Mary", 12, 140.36};
    cout << man.name << ' ' << man.age << ' ' << man.growth << '\n';
    cout << woman.name << ' ' << woman.age << ' ' << woman.growth << '\n';
    cout << "Инициализация полей структуры с помощью переменных\n";
    int id = 1;
    string firtsName = "Alex";
    short old = 18;
    char clRoom = 'a';
    Card student {id, firtsName, old, clRoom};
    cout << student.id << ' ' << student.name << ' ' << student.age << ' ' << student.classRoom << endl;
    cout << "Инициализация полей структуры с пользовательским вводом\n";
    puts("Введите id школьника и возраст и букву класса по порядку через пробел");
    id = 0, old = 0;
    cin >> id >> old >> clRoom;
    puts("Введите имя школьника");
    getline(cin >> ws, firtsName);
    Card schoolboy {id, firtsName, old, clRoom};
    cout << schoolboy.id << ' ' << firtsName << ' ' << schoolboy.age << ' ' << schoolboy.classRoom << endl;
    return 0;
}
// Output
/*
Виды инициализации полей структур
Инициализация с помощью списка
Структура с разными типами данных внутри
Alex 46 170.5
Mary 12 140.36
Инициализация полей структуры с помощью переменных
1 Alex 18 a
Введите id школьника и возраст и букву класса по порядку через пробел
9
14
g
Введите имя школьника
Alex
9 Alex 14 g
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //