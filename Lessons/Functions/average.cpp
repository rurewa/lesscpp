// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простая программа для нахождения среднего значения
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

//double getInputAvarage();

int printInput() {
    cout << "Введите число\n";
    int num = 0;
    cin >> ws >> num;
    return num;
}

int average(int a, int b , int c) {
    return (a + b + c) / 3;
}

int main() {
    int a = printInput();
    int b = printInput();
    int c = printInput();
    int averageResult = average(a, b, c);
    cout << averageResult << endl;
    return 0;
}

/* double getInputAvarage() {
    cout << "Введите числа: ";
    double a = 0.0, b = 0.0, c = 0.0;
    cin >> a >> b >> c; // Принимает значение от пользователя
    return (a + b + c) / 3; // Возвращает значение в caller
} */
// Output:
/*
Введите число
1
Введите число
2
Введите число
3
2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//