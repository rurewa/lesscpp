#include<iostream>
using namespace std;

int main() {
	int i = 5;
	i = ++i + 1; // Не желательно!
	cout << i << endl;
	//i = ++i + ++i; // Ошибка!
	//cout << i << '\n';
	return 0;
}
