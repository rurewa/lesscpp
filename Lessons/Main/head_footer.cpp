// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Простой пример вычесления остатка до 100 лет
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- 
#include<iostream>
using namespace std;

int main() {
	cout << "Ваш возраст?" << endl;
	int age = 0;
	cin >> age;
	int result = 100 - age;
	cout << "До 100 лет осталось:  "<< result << endl;
	return 0;
}
// Output
/*
Ваш возраст?
45
До 100 лет осталось:  55
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-