// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой таймер
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	int sec = 0;
	int min = 0;
    int  hour = 0;
	while (true) {
		sleep(1);
		cout << sec << " : " << min << " : " << hour << '\n';
        ++sec;
		if (sec >= 60) {
            sec = 0, ++min;
            ++sec;
            cout << sec << " : " << min << " : " << hour << '\n';
			if (min >= 59) {
                sec = 0, min = 0, ++hour;
                cout << sec << " : " << min << " : " << hour << '\n';
				++sec;
			}
		}
	}
	return 0;
}
// Output:
/*
3 : 33 : 92
4 : 33 : 92
5 : 33 : 92
6 : 33 : 9
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//