#include<iostream>
using namespace std;

int fact(int n) {
    int f = 0;
    if (n <= 1) {
        f = 1;
    }
    else {
        f = n * fact(n - 1); // 5 * (5 - 1), 6 * (4 - 1) ect.
    }
    return f;
}

int fact2(int n) {
    int f = 1;
    cout << "Множители: " << n << endl;
    if (n > 1) {
        f = n * fact2(n - 1);
    }
    cout << "Результаты: " << f << endl;
    return f;
}

int factorial(int n) {
    int f = 1;
    while (n > 1) {
        cout << "Вверх: " << n << endl;
        f *= n;
        n -= 1;
        cout << "Вниз: " << f << endl;
    }
    return f;
}

int main() {
    //cout << fact(5) << endl;
    //cout << factorial(5) << endl;
    cout << fact2(6) << endl;
    return 0;
}
/*----------------------------------------------------------------
5 * (5 - 1), 20
5 * (4 - 1), 15
5 * (3 - 1), 10
5 * (2 - 1), 5
5 * (1 - 1) 0

*/