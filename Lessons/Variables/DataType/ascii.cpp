#include<iostream>
using namespace std;

int main() {
    char ac = 'a';
    int ai = ac;
    cout << ai << " " << endl;
    cout << static_cast<int>(ac) << '\n';
    cout << (char) (96 - 1) << "\n";
    return 0;
}