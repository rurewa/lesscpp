#include<iostream>
using namespace std;
// micro const.cpp
int main() {
    const double a = 3.1415; // Константа - неизменяемый тип данных
    int numZero = 0;
    a = numZero; // Ошибка! Переменная доступна только для чтения
    cout << a << endl;
    cout << numZero << "\t" << a << endl;
	return 0;
}
