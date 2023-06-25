#include <iostream>
using namespace std;

// Переменные бывают глобальными и локальными
// Глобальные переменные
// Целые числа
short sh = 10; // short - это тип, sh - произвольное, 10 - произвольное значение
// short - -32'768 до 32'767
unsigned short ush = 15; // Unsigned - беззнаковый тип
int in = 100; // int - целый. -2'147'483'648 до 2'147'483'647
unsigned int uin = 12; // Инициализировал переменную
long lg = 12300; // long - содержит очень большие числа
unsigned long ulg = 40; // Беззнаковый long
// Вещественные числа (Дробные числа)
float fl = 2.35;
float ufl = -25.3;
double db = 33.7;

double var; // Объявление переменной

char ch = 98;
string str = "Hello, World!"; // Тип string хранит строки

int main() {
	cout << sh << ' ' << ush << '\n';
	cout << in << ' ' << uin << '\n';
	cout << fl << ' ' << ufl << ' ' << db << '\n';
	cout << var << '\n';
	cout << (char)(ch + 1) << '\n';
	cout << str << '\n';
	return 0;
}

