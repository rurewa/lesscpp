// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простые примеры с переменными
// vars.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

// Имена переменных не должны начинаться с цифры.
// Глобальные переменные - это зло!
//int var = 10;
/* void rav() {
    int var = 10;
} */

int main() {
	{
        int var = 10; // Инициализируется
        cout << var << endl; // Вызывается
        // Тут уничтожается
    }
    //cout << var << endl;
	//int var = 10;
	//int var = 15; // Не должно быть в программе одноимённых переменных!
	int someVar = 3;
	cout << var << '\t' << someVar << endl;
	int num = someVar + 7;
	cout << num << endl;
	int num1 = 2, num2 = 1;
	cout << num1 << '\t' << num2 << endl;
	cout << "Поменяем значения переменных местами\n";
	num1 = num1 + num2; // 3
	num2 = num1 - num2; // 2
	num1 = num1 - num2; //1
	cout << num1 << '\t' << num2 << endl;
	return 0;
}
// Output:
/*
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//