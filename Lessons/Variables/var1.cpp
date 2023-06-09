#include<iostream>
using namespace std; // std - standart стандарт

int main() {
    // Беззнаковые типы данных
    cout << "Знаковые типы данны" << endl;
    short varShort = -32; // Тип short - для очень небольших целых чисел
    int varInteger = 2147; // Тип int - для небольших целых чисел
    long varLong = 9'223; // Тип long - для больших целых чисел
    long long varLongLong = 9'223'807; // Тип long long для очень больших целых чисел
    float varFloat = 25.2; // Тип float - для маленьких дробных чисел
    double varDouble = 2255.335; // Тип double - для больших дробных чисел
    char varChar = 'c'; // Тип char - для символов
    cout << varShort << endl;
    cout << varInteger << endl;
    cout << varLong << endl;
    cout << varLongLong << endl;
    cout << varFloat << endl;
    cout << varDouble << endl;
    cout << varChar << endl;
    // Знаковые типы данных
    cout << "Беззнаковые типы данных" << endl;
    unsigned short uVarShort = 32; // Тип short - для очень небольших целых беззнаковых чисел
    unsigned int uVarInteger = 2147; // Тип int - для небольших целых беззнаковых чисел
    cout << uVarShort << endl;
    cout << uVarInteger << endl;
    return 0;
}