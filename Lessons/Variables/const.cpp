#include<iostream>
using namespace std;

int main() {
    const int A = 0;
    int b = 3, c = 7;
    int result = A + b + c;
    cout << result << endl;
    A = result; // Считается ошибкой, т.к. константы не перезаписываются
    cout << A << endl;
    return 0;
}