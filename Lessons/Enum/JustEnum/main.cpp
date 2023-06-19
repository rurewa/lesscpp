// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Получить доступ
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

enum class CppEditor {
    CODE_BLOCK = 4,
    ECLIPSE,
    VISUAL_STUDIO_CODE,
    QT_CREATOR
};

int main(){
    cout << "Ваш любимый редактор кода: - 4 (Code Block), 5 (Eclipse), 6 (Visual Stuido Code), 7 (QT Creator)"<< endl;
    int vs = 0;
    cin >> ws >> vs;
    CppEditor editors = static_cast<CppEditor>(vs);
    switch (editors) {
    case CppEditor(4):
        puts("Code Block");
        break;
    case CppEditor(5):
        puts("Ecplise");
        break;
    case CppEditor(6):
        puts("Visual Stuido Code");
        break;
    case CppEditor(7):
        puts("QT Creator");
        break;
    default :
        puts("?");
    }
    return 0;
}
// Output
/*
Car - 1
Visual Studio Code C++ - 10
Visual Studio Code C++ - 10
Ecplises
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-