// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример сочетания структур и массива
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Rectangle { // Прямоугольник
    int length; // Длина
    int width; // Ширина
};

struct Perimeter
{
    int length; // Длина
    int width; // Ширина
};


int main() {
    cout << "Нахождение площади прямоугольников\n";
    Rectangle rects[2]; // Массив в 2 прямоугольника [0, 1]
    // Инициализируем члены структуры
    int firstRectangleLenght = rects[0].length = 15;
    int firstRectangleWidth = rects[0].width = 10;
    int secondRectangleLenght = rects[1].length = 10;
    int secondRectangleWidth = rects[1].width = 7;
    int rectangleFirstArea = firstRectangleLenght * firstRectangleWidth;
    int rectangleSecondArea = secondRectangleLenght * secondRectangleWidth;
    cout << "Площадь 1-го квадрата: " << rectangleFirstArea << "\n";
    cout << "Площадь 2-го квадрата: " << rectangleSecondArea << "\n";
    /* cout << "Периметры прямоугольников\n";
    firstRectangleLenght = rects[0].length = 15;
    firstRectangleWidth = rects[0].width = 10;
    secondRectangleLenght = rects[1].length = 10;
    secondRectangleWidth = rects[1].width = 7;
    rectangleFirstArea = (firstRectangleLenght + firstRectangleWidth) * 2;
    rectangleSecondArea = (secondRectangleLenght + secondRectangleWidth) * 2;
    cout << "Периметр 1-го квадрата: " << rectangleFirstArea << "\n";
    cout << "Периметр 2-го квадрата: " << rectangleSecondArea << "\n"; */
    /* cout << "Введите длину 1-го прямоугольника\n";
    int userInput = 0;
    cin >> ws >> userInput;
    int firstRectangleLenght = rects[0].length = userInput;
    cout << "Введите ширину 1-го прямоугольника\n";
    cin >> ws >> userInput;
    int firstRectangleWidth = rects[0].width = userInput;
    cout << "Введите длину 2-го прямоугольника\n";
    cin >> ws >> userInput;
    int secondRectangleLenght = rects[1].length = userInput;
    cout << "Введите ширину 2-го прямоугольника\n";
    cin >> ws >> userInput;
    int secondRectangleWidth = rects[1].width = userInput; */

    return 0;
}
// Output:
/*
Площадь 1-го квадрата: 150
Площадь 2-го квадрата: 70
*/
// Задание 1
/* Дописать программу, чтобы она находила Периметр прямоугольника */
// Задание 2
/* Ввести в эту программу пользовательский ввод значений длины и ширины прямоугольника */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
