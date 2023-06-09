#include <iostream>
#include "colors.h"
using namespace std;

int main() {
    cout << FBLU("Синий") << endl;
    cout << BOLD(FBLU("Синий и жирный")) << endl;
    return 0;
}