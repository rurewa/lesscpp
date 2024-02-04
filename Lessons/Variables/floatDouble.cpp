// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Вещественный тип данных
// floatDouble.cpp DataType
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    double num = 22345.6789;
    puts("Отображение значения переменной в десятичном формате стандартной точности");
    // При таком отображении происходит округление дробной части
    cout << num << endl;
    puts("Отображение значения переменной в экспоненциальном формате");
    // Удобна для представления очень больших и очень малых чисел. Часто используется в науке
    cout << scientific << num << endl; // scientific - манипулятор точности
    cout << fixed << num << endl; // fixed - отображать с фиксированной точкой
    cout << showpoint << num << endl;

    /* float secondFloatNum = 1.1;
    float result = 0.0;
    result = firstFloatNum + secondFloatNum;
    cout << result << endl;
    result = firstFloatNum - secondFloatNum;
    cout << result << endl;
    result = firstFloatNum * secondFloatNum;
    cout << result << endl;
    result = firstFloatNum / secondFloatNum; */
    return 0;
}