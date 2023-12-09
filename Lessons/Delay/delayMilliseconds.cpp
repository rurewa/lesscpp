// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Задержка в миллисекундах
// delayMilliseconds.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
//#include <chrono>
#include <thread>
using namespace std;

int main() {
	int counter = 0;
    while (counter != 10) {
        cout << ++counter << '\n';
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
	return 0;
}
// Output
/*
1
2
3
4
5
6
7
8
9
10
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//