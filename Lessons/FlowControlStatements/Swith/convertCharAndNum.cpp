// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для преобразования cимвола в число и наоборот
// по таблице ASCII
// convertCharAndNum.cpp
// v 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout << "1. Конвертировать в int\n";
    cout << "2. Конвертировать в char\n";
    cout << "3. Exit\n";
    int inputChoice = 0, convertNumber = 0;
    char convertChar  = 0;
    cin >> ws >> inputChoice;
    switch (inputChoice)
    {
    case 1:
        cout << "Введите символ: ";
        cin >> convertChar;
        //cout << convertChar << " -> " << static_cast<int>(convertChar) << endl;
        cout << convertChar << " -> " << (int)(convertChar) << endl;
        break;
    case 2:
        cout << "Введите номер кода 0-127: ";
        cin >> convertNumber;
        // Ввести проверку диапазона чисел
        if (convertNumber < 0 || convertNumber > 127) {
            puts("Неправильный код!");
            return main();
        }
        else {
            //cout << convertNumber << " -> " << "\"" << static_cast<char>(convertNumber) << "\"" << endl;
            cout << convertNumber << " -> " << "\"" << (char)(convertNumber) << "\"" << endl;
        }
        break;
    case 3:
        puts("Пока!");
        break;
    default:
        puts("Что?");
        return main();
        break;
    }
    return 0;
}
// Д.З. Раскрасить меню и остальной вывод программы
// Output:
/*
1. Конвертировать в int
2. Конвертировать в char
3. Exit
2
Введите номер кода 0-127: 106
106 -> "j"
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
