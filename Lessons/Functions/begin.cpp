// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые примеры функций
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

void printOk() {
    cout << "Ok!" << endl;
}

void printWorld(); // Функция, которая выводит на экран Hello, World!
int returnNum(); // Которая возвращает в программу число 35
int inputNum(int num); // Функция, которая возвращает в программу любое целое число
string function(); // Функция, которая возвращает строку
double division(double a, double b); // Функция, которая возвращает разность  2-х дробных чисел
void result(double result); // Функция, которая вызывает другую функцию

int main() {
    printOk();
    printWorld();
    cout << returnNum() << endl;
    cout << inputNum(45) << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    result(division(35, 45));
    return 0;
}

void printWorld() {
    cout << "Hello, World!" << endl;
}

int returnNum() {
    return 35;
}

int inputNum(int num) {
    return num;
}

string function() {
    return "Функция - именованный блок операторов. Она же Подпрограмма, которая есть последовательность стейтментов для выполнения определённой задачи. Имеет вид name();";
}

double division(double a, double b) {
    return a / b;
}

void result(double result) {
    cout << "Результат деления: " << result << endl;
}
// Output:
/*
Ok!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
