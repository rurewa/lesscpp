// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример применения функции, которая может возвращать структуру из нескольких
// членов одновременно
// structFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Point3d {
    double x;
    double y;
    double z;
};

Point3d getZeroPoint(double x, double y, double z) {
    Point3d temp = { x, y, z };
    return temp;
}

double userInput() {
    double temp;
    cin >> ws >> temp;
    return temp;
}

int main() {
    cout << "Enter value X: " << endl;
    double valueX = userInput();
    cout << "Enter value Y: " << endl;
    double valueY = userInput();
    cout << "Enter value Y: " << endl;
    double valueZ = userInput();
    Point3d zero = getZeroPoint(valueX, valueY, valueZ);
    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0) {
        cout << "Точка равна нулю" << endl;
    }
    else {
        cout << "Точка не равна нулю" << endl;
    }
    return 0;
}
/* Output:
Enter value X:
25
Enter value Y:
30
Enter value Y:
10
The point is not zero
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//