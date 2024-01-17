// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum для получения символов ASCII
// asciiEnums.cpp Enums
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
    cout << "Круглые скобки - " << (char)LEFT_BRAKETS << (char)RIGHT_BRAKETS << '\n';
    Punctuation_1 semicolon = SEMICOLON;
    Punctuation_1 colon = COLON;
    //colon = 100; // Так нельзя
    //COLON = 255; // Так нельзя
    cout << "Точка с запятой - " << (char)semicolon << '\n';
    cout << "Двоеточие - " << (char)colon << '\n';
    Punctuation_1 punct = DASH;
    char getUserChar;
    puts("Введите символ Тире");
    cin >> getUserChar;
    if (getUserChar == (char)(punct)) {
        cout << "Символ: " << (char)punct << '\n';
    }
    else {
        puts("No");
    }
    puts("Введите один из символов: '.', '/', ',', '-', ':', ';'");
    cin >> getUserChar;
    /* if (getUserChar == Punctuation_1::DOT) {
        cout << "Вы ввели: " << (char)Punctuation_1::DOT << '\n';
    }
    else if (getUserChar == Punctuation_1::SLASH) {
        cout << "Вы ввели: " << (char)Punctuation_1::SLASH << '\n';
    }
    else if (getUserChar == Punctuation_1::COMMA) {
        cout << "Вы ввели: " << (char)Punctuation_1::COMMA << '\n';
    }
    else if (getUserChar == Punctuation_1::DASH) {
        cout << "Вы ввели: " << (char)Punctuation_1::DASH << '\n';
    }
    else if (getUserChar == Punctuation_1::COLON) {
        cout << "Вы ввели: " << (char)Punctuation_1::COLON << '\n';
    }
    else if (getUserChar == Punctuation_1::SEMICOLON) {
        cout << "Вы ввели: " << (char)Punctuation_1::SEMICOLON << '\n';
    }
    else {
        cout << "What?\n";
    } */
    int choice = (int)(getUserChar);
    switch (choice)
    {
    case Punctuation_1::DOT:
        cout << "Вы ввели: " << (char)Punctuation_1::DOT << '\n';
        break;
    case Punctuation_1::SLASH:
        cout << "Вы ввели: " << (char)Punctuation_1::SLASH << '\n';
        break;
    case Punctuation_1::COMMA:
        cout << "Вы ввели: " << (char)Punctuation_1::COMMA << '\n';
        break;
    case Punctuation_1::DASH:
        cout << "Вы ввели: " << (char)Punctuation_1::DASH << '\n';
        break;
    case Punctuation_1::COLON:
        cout << "Вы ввели: " << (char)Punctuation_1::COLON << '\n';
        break;
    case Punctuation_1::SEMICOLON:
        cout << "Вы ввели: " << (char)Punctuation_1::SEMICOLON << '\n';
        break;
    default:
        puts("What?");
        break;
    }
    return 0;
}
/* Д.З. На основе этого кода сделать програмы выбора знаков препинания
с помощью if-else, и другой вариант такой же программы, но с
помощью switch-case, используя в этих конструкциях перечислители.
Вывод программы должен быть таким:
Введите один из символов: '.', '/', ',', '-', ':', ';'
/
Вы ввели: /
*/
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
