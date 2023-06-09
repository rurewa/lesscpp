// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Разработать программу, которая с помощью
// числовых кодов ASCII выведет на экран слово Hello, World!
// helloWorldWithAscii.cpp
// V 1.0
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
	const int HELLO[] {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
	for (auto i : HELLO) { cout << (char)i; }
	cout << endl;
    return 0;
}
// Output
/*
Hello, World!
*/
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// END FILE
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
