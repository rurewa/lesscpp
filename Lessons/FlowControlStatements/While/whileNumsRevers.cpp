// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Вывод числе в столбик с одновременным реверсом
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
	int count = 1;
	int revers = 10;
	while (count <= 10) {
		cout << count << " ";
		++count;
		cout << revers << endl;
		--revers;
	}
	return 0;
}
// Output:
/*
1 10
2 9
3 8
4 7
5 6
6 5
7 4
8 3
9 2
10 1
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//