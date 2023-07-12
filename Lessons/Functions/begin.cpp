// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые примеры функций
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

void printOk() {
    cout << "Ok!" << endl;
}

void printWorld() {
    cout << "Hello, World!" << endl;
}

int returnNum() {
    return 35;
}

int inputNum(int num) { // int num - это параметр функции
    return num;
}

string function() {
    return "Функция - именованный блок операторов. Она же Подпрограмма, которая есть последовательность стейтментов для выполнения определённой задачи. Имеет вид name();";
}

string str(string s) {
    return s;
}

int sum() {
    return 25 + 10;
}

int total(int a, int b) {
    return a + b;
}

double division(double a, double b) {
    return a / b;
}

void printResult(double result) {
    cout << "Результат деления: " << result << endl;
}

bool logic() {
    return true;
}

void printLogoc(bool l) {
    cout << boolalpha << l << endl;
}

bool comp(bool x, bool y) {
    if (x == y) {
        return true;
    }
    else {
        return false;
    }
    //return (x = y) ? true : false;
}

int main() {
    printOk();
    printWorld();
    cout << returnNum() << endl;
    cout << inputNum(45) << endl; // 45 - это аргумент функции
    cout << inputNum(45) + 10 << endl;
    cout << function() << endl;
    cout << function() << endl;
    cout << function() << endl;
    printResult(division(35, 45));
    bool l = logic();
    cout << l << endl;
    printLogoc(logic());
    cout << comp(true, false) << endl;
    return 0;
}

// Output:
/*
Ok!
Hello, World!
35
45
Функция - именованный блок операторов. Она же Подпрограмма, которая есть последовательность стейтментов для выполнения определённой задачи. Имеет вид name();
Функция - именованный блок операторов. Она же Подпрограмма, которая есть последовательность стейтментов для выполнения определённой задачи. Имеет вид name();
Функция - именованный блок операторов. Она же Подпрограмма, которая есть последовательность стейтментов для выполнения определённой задачи. Имеет вид name();
Результат деления: 0.777778
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
