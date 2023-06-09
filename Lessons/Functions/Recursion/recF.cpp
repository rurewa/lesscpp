#include<iostream>
using namespace std;

int fact(int n) {
    if (n < 0) {
        cout << "Вернули 0" << endl;
        return 0;
    }
    if (n == 0) {
        cout << "n == 0" << endl;
        return 0;
    }
    else {
        return n * fact(n - 1); // делаем рекурсию.
    }
}

void showfact(int n) {
    int a = fact(n); // Факториал числа
    cout << n << " != " << a << endl;
}

int main() {
    showfact(1);
    showfact(2);
    showfact(3);
    showfact(4);
    return 0;
}