// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой обратный таймер минут и секунд
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	cout << "Введите минуты: ";
	int userMin = 0;
	cin >> userMin;
	cout << "Введите секунды: ";
	int userSec = 0;
	cin >> userSec;
	int sec = 60;
	while (userMin > 0) {
		while (userMin > 0 && userSec > 0) {
			cout << --userSec << " : " << userMin << '\n';
			sleep(1);
		}
		int count = userMin;
		--userMin;
		while (sec >= 1) {
			cout << --sec << " : " << userMin << '\n';
			--count;
			sleep(1);
		}
		sec = 60;
		//cout << "Кол-во итераций" << userMin << '\n';
	}
	while (userMin <= 0 && userSec > 0)	{
		cout << --userSec << " : " << userMin << '\n';
		sleep(1);
	}
	return 0;
}
// Output:
/*
15 : отработка минут 0
14 : отработка минут 0
13 : отработка минут 0
12 : отработка минут 0
11 : отработка минут 0
10 : отработка минут
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//