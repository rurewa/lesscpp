// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые функции
// Funcions justFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

void printOk() {
    cout << "Ok!" << endl;
}

void printHello() {
    cout << "Hello, World!\n";
}

int returnNum() { // Функция без параметра
    return 35;
}

short inputNum(short num) { // Функция с параметром
    return num;
}

short sum() {
    return 25 + 10;
}

int total(int a, int b) {
    return a + b;
}

double division(double a, double b) {
    return a / b;
}

void printResult(double reuslt) {
    cout << "Результат вычисления: " << reuslt << endl;
}

string function() {
    return "Функция - именованный блок операторов. Это подпрограмма, которая содержит инструкции для выполнения задачи. Имеет вид name();";
}

string str(string s) {
    return s;
}

char ch(char c) {
    return c;
}

bool logic() {
    return true;
}

void printLogic(bool x) {
    cout << boolalpha << x << endl;
}

bool comp(bool x, bool y) {
    /* if (x == y) {
        return true;
    }
    else {
        return false;
    } */
    return (x == y) ? true : false;
}

int main() { // Главная функция
    cout << boolalpha << comp(true, false) << endl;
    printLogic(false);
    cout << boolalpha << logic() << endl;
    cout << ch('U') << endl;
    cout << str("Something") << endl;
    cout << function() << endl;
    printResult(division(5, 7));
    cout << division(25, 15) << endl;
    cout << total(100, 200) << endl;
    cout << sum() << endl;
    cout << inputNum(200) << endl;
    cout << returnNum() << '\n';
    printHello();
    printOk();
    printOk();
    printOk();
    printOk();
    printHello();

    return 0;
}

// Output
/*
false
false
true
U
Something
Функция - именованный блок операторов. Это подпрограмма, которая содержит инструкции для выполнения задачи. Имеет вид name();
Результат вычисления: 0.714286
1.66667
300
35
200
35
Hello, World!
Ok!
Ok!
Ok!
Ok!
Hello, World!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
