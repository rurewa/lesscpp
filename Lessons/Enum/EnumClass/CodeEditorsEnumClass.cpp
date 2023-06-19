// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сравнение enum и enum class
// comparison.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Editors { VIM, MICRO, ECLIPE };

// Нет никаких ошибок переопределения
enum class CppEditors { CODE_BLOCKS, ECLIPSE, VISUAL_STUDIO_CODE, QT_CREATOR };

int main() {
    cout << "Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator\n";
    int choose = 0;
    cin >> ws >> choose;
    //CppEditors vs = static_cast<CppEditors>(choose);
    CppEditors vs = (CppEditors)choose;
    switch (vs)
    {
    case CppEditors::CODE_BLOCKS: // Можно CppEditor(4)
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
Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator
0
Code Blocks
[user@host-251 EnumClass]$ ./main.bin
Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator
3
QT Creator
[user@host-251 EnumClass]$ ./main.bin
Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator
2
VS Code!
[user@host-251 EnumClass]$ ./main.bin
Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator
1
Eclipse
[user@host-251 EnumClass]$ ./main.bin
Какой редактор кода вы желаете? 0 - CB, 1 - ECL, 2 - VSCode, 3 - QTCreator
6
?
*/
// Задание
/*
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
