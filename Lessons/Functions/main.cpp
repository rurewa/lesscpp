// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Рефакторинг программы "Проверка знаний таблицы умножения"
// Переписываем программу функциями
// checkMultiTable.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int randNum();
bool comparison(int a, int b);
int calculate(int a, int b);
void printResult(bool result);
int userAnswer();

int main() {
    cout << "Проверка знаний таблицы умножения\n";
    char userSelection = 'y';
    short num1 = 0, num2 = 0;
    while (userSelection != 'n') {
        num1 = randNum();
        num2 = randNum();
        cout << num1 << 'x' << num2 << '?' << endl;
        int answer = userAnswer();
        printResult(comparison(answer, calculate(num1, num2)));
        cout << "Желаете продолжить? [y/n] ";
        cin >> userSelection;
    }
    return 0;
}

int randNum() {
    srand(time(0));
    return 1 + (rand() % 10);
}

bool comparison(int a, int b) {
    cout << boolalpha;
    return a == b ? true : false;
}

int calculate(int a, int b) {
    return a * b;
}

void printResult(bool result) {
    cout << result << endl;
}

int userAnswer() {
    int answer = 0;
    cout << "Ваш ответ ";
    cin >> answer;
    return answer;
}
// Output
/*
Проверка знаний таблицы умножения
7x7?
Ваш ответ 49
true
Желаете продолжить? [y/n] y
3x3?
Ваш ответ 10
false
Желаете продолжить? [y/n] n
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//