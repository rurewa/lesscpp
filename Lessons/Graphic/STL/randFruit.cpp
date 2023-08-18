// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Графика STL. Эмодзи в C++
// emoji.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    string fruits[] {"🍏", "🍊", "🥑"};
	/* cout << fruits[0] << endl;
    cout << fruits[1] << endl;
    cout << fruits[2] << endl; */
    int randomFruit = 0 + (rand() % 2);
    cout << randomFruit << '\t' << fruits[randomFruit] << endl;
	return 0;
}
// Output
/*
0       🍏
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

