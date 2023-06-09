#include<iostream>
using namespace std;

int fract(int n) {
    int f = 1;
    cout << "Шаги: " << n << endl;
    if (n > 1) {
        f = n * fract(n - 1);
    }
    cout << "Результат вычсления: " << f << endl;
    return f;
}

int main() {
    cout << fract(5) << endl;
    return 0;
}