// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример сочетания структур и массива
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Rectangle { // Прямоугольник
    int lehgth; // Длина
    int width; // Ширина
};

int main() {
    Rectangle rects[2]; // 2 квадрата
    /* // Можно так
    //int re = rects[0].lehgth = 15;
    //cout << re << endl;
    */
    // А можно так:
    //cout << (rects[0].lehgth = 15) << endl;
    int firstSquareLenght = rects[0].lehgth = 15;
    int firstSquareWidth = rects[0].width = 10;
    int secondSquareLenght = rects[1].lehgth = 10;
    int secondSquareWidth = rects[1].width = 7;
    int areaFirstSquare = firstSquareLenght * firstSquareWidth;
    int areaSecondSquare = secondSquareLenght * secondSquareWidth;
    cout << "Площадь 1-го квадрата: " << areaFirstSquare << "\n";
    cout << "Площадь 2-го квадрата: " << areaSecondSquare << "\n";
    return 0;
}
// Output:
/*
15
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
