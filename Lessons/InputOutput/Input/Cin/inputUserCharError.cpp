// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Обработка некорректного пользовательского ввода.
// Символы
// inputUserCharError.cpp Input
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "Обработка символов\n";
    char op;
    while (true) {
        cout << "Введите +, -, *, или /\n";
        cin >> noskipws >> op; // noskipws - запретить начальный пробел
        cin.ignore(32767, '\n'); // Чтобы убрать символ новой строки из входного потока
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            break; // Прыжок из цикла
        }
        else {
            cout << "Не корректный символ! Введите +, -, *, или /\n";
        }
    }
    cout << "Введён корректный символ: " << op << '\n';
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
