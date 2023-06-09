// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая функция для стандартного вывода
// Simple function for standard output
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

// Void - тип данных, который ничего не возвращает
void printOk();
int returnNum(); // int - возвращает целое число
double division(double a, double b); // Функция, которая делит два числа
string str();
void printStr(); // Функция, которая выведет на экран строку
string parStr(string str);

int main() {
    printStr();
    printOk();
    printOk();
    printStr();
    printOk();
    printOk();
    printOk();
    cout << returnNum() << endl;
    cout << division(35.2, 4) << endl;
    cout << str() << endl;
    cout << parStr("Строка") << endl;

    return 0;
}

void printOk() { // Объявление функции. Имя функции
    cout << "Ok" << endl; // Тело функции
}

int returnNum() {
    return 35;
}
double division(double a, double b) {
    return a / b;
}

string str() {
    return "Функция строкового типа";
}

void printStr() {
    cout << str() << endl;
}

string parStr(string str) {
    return str;
}
// Output:
/*
Ok
Ok
Ok
35
8.8
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
