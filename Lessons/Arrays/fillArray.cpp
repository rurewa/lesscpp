// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример заполнения простого массива циклом
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int arr[5] = {};
    cout  << "Содерджимое массива до заполнения\n";
    for (int element  = 0; element <= 4; ++element) {
		cout << arr[element] << " ";
	}
	cout  << "\nСодерджимое массива после заполнения\n";
    for (int i = 0; i <= 4; ++i) {
        arr[i] = ++a;
        cout << arr[i] << " ";
    }
    cout << "Содерджимое массива в обратном порядке\n";
    int b = 5;
    for (int i = 4; i >= 0; --i) {
        cout << arr[i] << " ";
        arr[i] = --b;
    }
    return 0;
}
// Output:
/*
1 2 3 4 5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//