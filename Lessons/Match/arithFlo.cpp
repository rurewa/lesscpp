// Арифметика вещественных чисел
#include<iostream>
//#include <math.h>
using namespace std;

int main() {
	// Операции с вещественными числами
	float pi = 3.1415, result = 0, a = 3.2, b = 4.3;
	cout << "Pi: " << pi << '\n';
	// Сложение
	result = a + b;
	cout << "Сложение: " << result << '\n';
	// Вычитание
	result = 0;
	result = a - b;
	cout << "Вычитание: " << result << '\n';
	// Произведение
	result = 0;
	result = a * b;
	cout << "Произведение: " << result << '\n';
	// Разность
	result = 0;
	result = a / b;
	cout << "Деление: "<< result << '\n';
	return 0;
}