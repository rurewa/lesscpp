// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Клиент оформил вклад на m тысяч рублей в банке под k% годовых.
// Через сколько лет сумма вклада превысит s тысяч рублей, если за
// это время клиент не будет брать деньги со счета.
// percent.cpp Не доделана! Надо проверить решение.
// v 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
	int dep, k, s, Y=1;
	cout << "Введи вклад: ";
	cin >> dep;
	cout << "Введи %: ";
	cin >> k;
	cout << "Введи сумму вклада: ";
	cin >> s;
	dep *= 1000;
	s *= 1000;
	while(s > dep) {
		dep += (dep / 100) * k;
		Y++;
	}
	cout << "Через: " << Y << endl;
}
// Output
/*
Введи число и диапазон от 1-10
2
1
10
2*1=2
2*2=4
2*3=6
2*4=8
2*5=10
2*6=12
2*7=14
2*8=16
2*9=18
2*10=20
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
