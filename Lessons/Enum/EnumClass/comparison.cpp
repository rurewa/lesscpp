// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение enum и enum class
// comparison.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Транспортные средства
enum Vehicle { CAR, BUS, BIKE, AUTORICKSHOW };

enum Wheeler
{
    //Car, // Ошибка переопределения! 'Car' находится в одном пространстве имён с 'Car' от vehicle
    SMALL_BUS,
};

enum class Editor { VIM, ECLIPES, VISUAL_STUDIO_CODE };

// Нет никаких ошибок переопределения
enum class CppEditor { ECLIPES, VISUAL_STUDIO_CODE, QT_CREATOR };

int main() {
    Vehicle car = CAR;
    if (car == CAR) {
        cout << "A car - " << car << endl;
    }
    Editor vs = Editor::VISUAL_STUDIO_CODE;
    if (vs == Editor::VISUAL_STUDIO_CODE) {
        cout << "Visual Studio Code - " << (int)vs<< endl;
    }
}
/* Output:
A car - 0
Visual Studio Code - 2
*/
// Задание
/*
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//