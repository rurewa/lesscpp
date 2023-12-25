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
    bool userChoose = false;
    while (again == 'y') {
        trueCount = 0;
        cout << "Можно ли выучить C++ за один видеоролик 30 мин? 0 - нет, 1 - да\n";
        cin >> userChoose;
        if (userChoose != true) {
            cout << "Верно! C++ не возможно выучить за один ролик!\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n";
        }
        cout << "g++ лучше clang? 0 - нет, 1 - да\n";
        cin >> userChoose;
        if (userChoose != true) {
            cout << "Верно! Clang всегда лучше g++\n";
            ++trueCount;
        }
        else {
            cout << "Не верно!\n";
        }
        cout << "Объявление переменной == её инициализации ? 0 - нет, 1 - да\n";
        cin >> userChoose;
        if (userChoose != true) {
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
