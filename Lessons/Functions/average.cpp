// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая программа для нахождения среднего значения
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

double average(double a, double b, double c);
double firstGetInput();
double secondGetInput();
double thirdGetInput();

int main() {
    using namespace std;
    double firstNum = firstGetInput();
    double secondNum = secondGetInput();
    double thirdNum = thirdGetInput();
    cout << "Результат: " << average(firstNum, secondNum, thirdNum) << endl;
    return 0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}

double firstGetInput() {
    using namespace std;
    cout << "Пример простой функции нахождения среднего значения" << endl;
    cout << "Введите первое число: ";
    double firstNumber = 0.0;
    cin >> firstNumber; // Принимает значение от пользователя
    return firstNumber; // Возвращает значение в caller
}

double secondGetInput() {
    using namespace std;
    cout << "Введите второе число: ";
    double secondNumber = 0.0;
    cin >> secondNumber;
    return secondNumber;
}

double thirdGetInput() {
    using namespace std;
    cout << "Введите третье число: ";
    double thirdNumber = 0.0;
    cin >> thirdNumber;
    return thirdNumber;
}
// Output:
/*
Пример простой функции нахождения среднего значения
Введите первое число: 25
Введите второе число: 30
Введите третье число: 45
Результат: 33.3333
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//