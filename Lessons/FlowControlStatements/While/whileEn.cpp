#include<iostream>
using namespace std;

int main() {
    //char en = '`';
    char en = 'a' - 1;
    while (en < 'z') {
        ++en;
        cout << en << " ";
    }
    cout << " " << endl;
    return 0;
}