#include<iostream>
using namespace std;

int main() {
    char oneChar = 'H';
    char twoChar = 'e';
    cout << oneChar << endl;
    cout << twoChar << endl;
    cout << static_cast<int>(oneChar) << endl;
    cout << static_cast<int>(twoChar) << endl;
    return 0;
}