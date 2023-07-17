// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Приоритет операций и правила ассоциативности
// Funcions justFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
	int a = 8, b = 3, c = 4, result = 0;
	result = a - b + c; // Слева направо
	cout << "Результат a - b + c = " << result << '\n';
	result ^= result;
	result = a - (b + c); // С уточнением
	cout << "Результат a - (b + c) = " << result << '\n';
	result ^= result;
	a = 38, b = 10, c = 6; // Изменим значения переменных
	result = a - b + c;
	cout << "Результат a - b + c = " << result << "\n";
	result ^= result;
	a = 24, b = 3, c = 2;
	result = a / b * c; // Оба оператора имеют одинаковый приоритет
	cout << "Результат a / b * c = " << result << "\n";
	result ^= result;
	result = a * b / c;
	cout << "Результат a * b / c = " << result << "\n";
	float fResult = 6.0 + 5.0 - (1.0 * (5.0 / 2.0));
	cout << "6 + 5 - (1 * (5 / 2)) = " << fResult << '\n';
    return 0;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
