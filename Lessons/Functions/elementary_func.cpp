// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Элементарныйе функции для стандартного вывода
// Elementary function for standard output
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include<string>
using namespace std;

void word() {
    cout << "Ok!" << endl;
}

int num() {
    return 70;
}

int sum() {
    return 25 + 10;
}

double del() {
    return 25.0 / 32.2;
}

string str(string s) {
    return s;
}

int sums(int a, int b) {
    return a + b;
}

float dels(float a, float b) {
    return a / b;
}

int main() {
    word();
    cout << dels(25.3, 33.5);
    cout << num() << endl;
    cout << sum() << endl;
    cout << del() << endl;
    cout << str("Alex") << endl;
    cout << str("Alena") << endl;
    cout << str("Hello") + str(", World!") << endl;
    cout << sums(25, 25) << endl;
    cout << sums(75, 13) << endl;
    return 0;
}
// Output:
/*
Ok!
70
35
0.776398
Alex
Alena
Hello, World!
50
88
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//