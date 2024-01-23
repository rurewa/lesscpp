// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение enum и enum class
// enunClass.cpp EnumsClass
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Транспортные средства
enum Lagre_Vehicle { CAR, BUS, TRUCK }; // Транспортное средство

enum Small_Vehicle
{
    //Car, // Ошибка переопределения! 'Car' находится в одном пространстве имён с 'Car' от vehicle
    SMALL_BUS, BIKE
};

enum class Editors { VIM, MICRO, ECLIPE };

// Нет никаких ошибок переопределения
enum class CppEditors { CODE_BLOCKS, ECLIPSE, VISUAL_STUDIO_CODE, QT_CREATOR };

int main() {
    //cout << VIM; // Прямой доступ к перечислителям enum class запрещён!
    Lagre_Vehicle car = Lagre_Vehicle car::CAR;
    if (car == Lagre_Vehicle car::CAR) {
        cout << "A car: " << car << endl;
    }
    CppEditors vs = CppEditors::VISUAL_STUDIO_CODE;
    if (vs == CppEditors::VISUAL_STUDIO_CODE) {
        //cout << "Visual Studio Code - " << static_cast<int>(vs) << endl;
        cout << "Visual Studio Code: " << (int)vs<< endl;
    }
    switch (vs = CppEditors::ECLIPSE)
    {
    case CppEditors::CODE_BLOCKS:
        puts("Code Blocks");
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
// Д.З. 
/* Output:
A car - 0
Visual Studio Code - 2
Eclipse
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
