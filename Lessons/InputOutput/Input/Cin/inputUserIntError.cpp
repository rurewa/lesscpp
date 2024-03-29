// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Обработка некорректного пользовательского ввода
// Обработка чисел с защитой от пробела, символа или слишком большого числа
// inputUserCharError.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    short num1 = 0;
    while (true) {
        cout << "Введите 1-е число\n";
        cin >> noskipws >> num1;
        if (cin.fail()) { // Включение режима отказа
            cin.clear(); // Возвращаем cin в рабочий режим
            cin.ignore(32767, '\n'); // Удаляем всё, что не числа и символ \n
            cout << "Что-то вы не то ввели, попробуйте снова\n";
        }
        else {
            cin.ignore(32767, '\n');
            break; // Прыжок из цикла
        }
    }
    short num2 = 0;
    while (true) {
        cout << "Введите 2-е число\n";
        cin >> noskipws >> num2;
        if (cin.fail()) {
            cin.clear(); // Возвращаем cin в рабочий режим
            cin.ignore(32767, '\n');
            cout << "Что-то вы не то ввели, попробуйте снова\n";
        }
        else {
            cin.ignore(32767, '\n');
            break; // Прыжок из цикла
        }
    }
    cout << "Вы ввели: " << num1 << " и " << num2 << '\n';
    return 0;
}
// Output:
/*
Введите 1-е число
e
Что-то вы не то ввели, попробуйте снова
Введите 1-е число
4343
Введите 2-е число
^[[A
Что-то вы не то ввели, попробуйте снова
Введите 2-е число
43432
Что-то вы не то ввели, попробуйте снова
Введите 2-е число
3432
Вы ввели: 4343 и 3432
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//