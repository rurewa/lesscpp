#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;
    float c = 5.0;
    float d = 2.0;
    cout << (a + b) << endl;
    cout << (a += b) << endl; // a = a + b
    cout << (a -= b) << endl; // a = a - b
    cout << (a *= b) << endl; // a = a * b
    cout << (c /= d) << endl; // a = a / b
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    int n = -1;
    cout << (n - -2) << "\n";
    return 0;
}