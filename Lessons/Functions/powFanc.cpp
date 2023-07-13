// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример возведения целого числа в степень
// powFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

// Функция, вычисляющая степень от базового числа
int pow(int baseNum, int exp) {
    int result = baseNum;
    for(int i = 1; i != exp; ++i) {
        result *= baseNum;
    }
    return result;
}

// Ввод от пользователя базового числа
int userBaseNumInput() {
    int baseNum;
    cin >> ws >> baseNum;
    return baseNum;
}

// Ввод от пользователя степени
int userExpInput() {
    int exp = 0;
    cin >> ws >> exp;
    if (exp == 0) { // При 0-й степени возвращает 1 и завершает программу
        puts("1");
        exit(0);
    }
    return exp;
}

int main() {
    cout << "Введите базовое число и через пробел его степень: ";
    int baseNum = userBaseNumInput();
    int exp = userExpInput();
    int result = pow(baseNum, exp);
    cout << result << endl;
    return 0;
}
// Output
/*
Введите базовое число и через пробел его степень: 2 5
32
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
