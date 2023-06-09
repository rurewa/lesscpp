#include<iostream>
using namespace std;

int main() {
    // Знаковый тип данных
    int signedVar = -10;
    cout << "Значение переменной: " << signedVar << endl;
    // Беззнаковый тип данных
    unsigned usignedVar = 10;
    cout << "Значение беззнакового типа данных: " << usignedVar << endl;
    cout << "Введите только беззнаковое число: " << endl;
    unsigned unsUserNum = 0;
    cin >> unsUserNum;
    // Если вы введёте отрицательное число, то произойдёт переполнение и будет выдан неправильный результат
    cout << "Введённая вами цифра: " << unsUserNum << endl;
    return 0;
}