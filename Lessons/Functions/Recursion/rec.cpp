#include<iostream>
#include<unistd.h>
using namespace std;

int countOut(int count) {
    sleep(1);
    cout << ". Execution" << endl;
    if (count > 1) {
        countOut(-- count);
    }
    cout << "Release" << endl;
}

int main() {
    countOut(4);
    return 0;
}