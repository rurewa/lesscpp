// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Разработать интерактивную программу, которая находит среднее
// арифметическое из 3-х чисел с выводом результата на экран.
// midlAri3nums.cpp
// V 1.0
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
	cout << "Введите 3-и натуральных числа\n";
	int oneNum = 0, twoNum = 0, threeNum = 0;
	cin >> ws >> oneNum >> twoNum >> threeNum;
	cout << "Среднее арифметическое: " << (oneNum + twoNum + threeNum) / 3 << endl;
    return 0;
}
// Output
/*
Введите 3-и натуральных числа
21
34
645
Среднее арифметическое: 233
*/
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// END FILE
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
