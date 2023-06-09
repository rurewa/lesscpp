// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum для получения символов ASCII
// asciiEnums.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Punctuation_1 {
    DOT = 46, // Точка
    SLASH, // Правая косая черта
    COMMA = 44, // Запятая
    DASH, // Тире
    COLON = 58, // Двоеточие
    SEMICOLON // Точка с запятой
};

enum Punctuation_2 {
    //DOT = 46, // Так нельзя, т.к. переменная с этим именем уже есть в другом перечислителе
    LEFT_BRAKETS = 40,
    RIGHT_BRAKETS,
};

int main() {
    Punctuation_1 semicolon = SEMICOLON;
    Punctuation_1 colon = COLON;
    //colon = 100; // Так нельзя
    //COLON = 255; // Так нельзя
    cout << "Точка с запятой - " << (char)semicolon << '\n';
    cout << "Двоеточие - " << (char)colon << '\n';
    cout << "Круглые скобки - " << (char)LEFT_BRAKETS << (char)RIGHT_BRAKETS << '\n';
    return 0;
}
/* Output:
Точка с запятой - ;
Двоеточие - :
Круглые скобки - ()
*/
// Задание
/* При помощи перечисления выести на экран это: { | }
и это: <=>? */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
