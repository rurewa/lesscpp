// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Варианты доступа к элементам перечислений enum по выбору пользователя
// /EnumClass simplyEnumClassInput.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

enum class Colors { YELLOW = 1, WHITE, ORANGE, GREEN };

int main() {
    cout << "Введите номер цвета: желтый - 1, белый - 2, оранжевый = 3, зелёный - 4\n";
    int userInput = 0;
    cin >> ws >> userInput;
    Colors color = static_cast<Colors>(userInput);
    if (color == Colors::YELLOW) {
        puts("Yellow");
    }
    else if (color == Colors::WHITE) {
        puts("White");
    }
    else if (color == Colors::ORANGE) {
        puts("Orange");
    }
    else if (color == Colors::GREEN) {
        puts("Green");
    }
    else {
        puts("Unknown!");
    }
    return 0;
}
// Output
/*
Введите номер цвета: желтый - 1, белый - 2, оранжевый = 3, зелёный - 4
0
Unknown!
[user@host-251 JustEnum]$ ./main.bin
Введите номер цвета: желтый - 1, белый - 2, оранжевый = 3, зелёный - 4
1
Yellow
[user@host-251 JustEnum]$ ./main.bin
Введите номер цвета: желтый - 1, белый - 2, оранжевый = 3, зелёный - 4
2
White
*/
// Задание
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-