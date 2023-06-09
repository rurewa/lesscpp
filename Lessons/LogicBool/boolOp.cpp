#include<iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha);
    bool a = true;
    bool b = true;
    cout << "a == b: " << (a == b) << endl;
    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "a || b: " << (a != b) << endl;
    cout << "(a == b) && (a != b): " << ((a == b) && (a != b)) << endl;
    cout << "((a == b) || (a != b)): " << ((a == b) || (a != b)) << endl;
    cout << "((a == b) != (a != b)): " << ((a == b) != (a != b)) << endl;
    return 0;
}