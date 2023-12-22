//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Простая игра-викторина с подсчётом баллов
// vict.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
    cout << "Викторина вопросов\n";
    char again = 'y';
    short trueCount = 0;
    while (again == 'y') {
        trueCount ^= trueCount;
        cout << "Можно ли выучить C++ за один видеоролик 30 мин? 0 - нет, 1 - да\n";
        int userChoose = 0;
        cin >> userChoose;
        if (userChoose != 1) {
            cout << "Верно! C++ не возможно выучить за один ролик!\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n";
        }
        cout << "g++ лучше clang? 0 - нет, 1 - да\n";
        cin >> userChoose;
        if (userChoose != 1) {
            cout << "Верно! Clang всегда лучше g++\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n";
        }
        cout << "Объявление переменной == её инициализации ? 0 - нет, 1 - да\n";
        cin >> userChoose;
        if (userChoose != 1) {
            cout << "Верно! Объявление переменной и её инициализация это разные операции\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n";
        }
        cout << "Ваши баллы: " << trueCount << endl;
        cout << "Хотите попробовать снова?\n";
        cin >> again;
    }
    cout << "Ваши баллы: " << trueCount << endl;
    return 0;
}
// Output
/*
Верно! Clang всегда лучше g++
Объявление переменной == её инициализации ? 0 - нет, 1 - да
1
Не верно!
Ваши баллы: 2
Хотите попробовать снова?
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
