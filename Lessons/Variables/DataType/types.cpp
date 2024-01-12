#include <iostream>
using namespace std;

int main() {
	auto n = 9'223'372'036'854'775'807;
	cout << "Auto type: " << n << endl;
	cout << typeid(n).name() << endl; // Определение типа данных
	auto a = 'a', b = 'b';
	cout << "Auto type: " << typeid(a).name() << ' ' << a + b << endl;
	char str1[] = {"Привет!"};
	char str2[] = {"\tАлекс!"};
	cout << str1 << str2 << endl;
	string str3 = "Счастливый ";
	string str4 = "Новый год!";
	cout << str3 + str4 << endl;
	return 0;
}
