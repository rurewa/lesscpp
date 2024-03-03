#include <iostream>
#include <unistd.h>
using namespace std;

int multyply(int a, int b) {
    return a * b;
}

int main() {
    sleep(5);
    cout << "Result:" << multyply(7, 8) << endl;
    return 0;
}