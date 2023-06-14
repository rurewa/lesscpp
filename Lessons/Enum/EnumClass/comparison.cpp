// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение enum и enum class
// comparison.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Транспортные средства
enum Vehicle { CAR, BUS, BIKE };

enum Wheeler
{
    //Car, // Ошибка переопределения! 'Car' находится в одном пространстве имён с 'Car' от vehicle
    SMALL_BUS,
};

enum class Editors { VIM, MICRO, ECLIPE };

// Нет никаких ошибок переопределения
enum class CppEditors { CODE_BLOCKS, ECLIPSE, VISUAL_STUDIO_CODE, QT_CREATOR };

int main() {
    Vehicle car = CAR;
    if (car == CAR) {
        cout << "A car - " << car << endl;
    }
    CppEditors vs = CppEditors::VISUAL_STUDIO_CODE;
    if (vs == CppEditors::VISUAL_STUDIO_CODE) {
        //cout << "Visual Studio Code - " << static_cast<int>(vs) << endl;
        cout << "Visual Studio Code - " << (int)vs<< endl;
    }
    switch (vs = CppEditors::ECLIPSE)
    {
    case CppEditors::CODE_BLOCKS:
        puts("Code Blocks"); // \n добавляется автоматически
        break;
    case CppEditors::ECLIPSE:
        puts("Eclipse");
        break;
    case CppEditors::VISUAL_STUDIO_CODE:
        puts("VS Code!");
        break;
    case CppEditors::QT_CREATOR:
        puts("QT Creator");
        break;
    default:
        puts("?");
        break;
    }

}
/* Output:
A car - 0
Visual Studio Code - 2
Eclipse
*/
// Задание
/*
 * Написать программу выбора редактора кода по желанию пользователя с таки выводом:
 * Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator
   0
   Code Blocks
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
