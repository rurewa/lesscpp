// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Разработать программу, которая выводит на экран весь
// английский алфавит с помощью цикла или счётчика for.
// abczCycle.cpp
// V 1.0
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
	/* for (char abcz = 'a'; abcz <= 'z'; ++abcz) {
		cout << abcz;
	}
	cout << endl; */
	/* char abcz = 'a';
	while (abcz <= 'z') {
		cout << abcz;
		++abcz;
	}
	cout << endl; */
	int abcz = 96;
	while (abcz != 122) {
		cout << (char)++abcz;
	}
	cout << endl;
    return 0;
}
// Output
/*
abcdefghijklmnopqrstuvwxyz
*/
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// END FILE
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
