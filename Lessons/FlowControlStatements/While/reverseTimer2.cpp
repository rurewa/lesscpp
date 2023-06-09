// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой обратный таймер минут, секунд и часов
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	cout << "Введите секунды: ";
	int userSec = 0;
	cin >> userSec;
	cout << "Введите минуты: ";
	int userMin = 0;
	cin >> userMin;
	cout << "Введите часы: ";
	int userHour = 0;
	cin >> userHour;
	auto sec = userSec + ((userMin * 60) + (userHour * 3600)); // полное количество секунд
	while (sec > 0)	{
		int timeSecs = (sec % 3600) % 60; // секунды
		int timeMins = (sec % 3600) / 60; // минуты
		int timeHours = (sec / 3600);		  // часы
		cout << timeSecs << " : " << timeMins << " : " << timeHours << '\n';
		--sec;
		sleep(1);
	}
	return 0;
}
// Output:
/*
10 : 5 : 0
11 : 5 : 0
12 : 5 : 0
13 : 5 : 0
14 : 5 : 0
15 : 5 : 0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//