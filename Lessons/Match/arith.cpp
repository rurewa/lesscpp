// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Элементарная арифметика
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
#include <cmath> // Библиотека простых математических операций
using namespace std;

int main() {
    cout << "Среднее арифметическое\n";
    int result = 0, firstNum = 0, secondNum = 0, threeNum = 0;
    cout << "Введите три натуральных числа: ";
    cin >> firstNum >> secondNum >> threeNum;
    result = (firstNum + secondNum + threeNum) / 3;
    cout << "Результат вычисления: " << result << endl;
    cout << "Нахождение общего сопротивления в последовательной цепи\n";

    cout << "Введите два значения: ";
    float totalResistance = 0, firstResistance = 0, secondResistance = 0;
    cin >> firstResistance >> secondResistance;
    totalResistance = firstResistance + secondResistance;
    cout << "Общее сопротивление резисторов: " << totalResistance << " ом" << endl;

    cout << "Нахождение общего сопротивления в параллельной цепи\n";
    cin >> firstResistance >> secondResistance;
    totalResistance = (firstResistance * secondResistance) / (firstResistance + secondResistance);
    cout << "Общее сопротивление резисторов: " << totalResistance << " ом" << endl;

    cout << "Нахождение величины тока в электрической цепи\n";
    float current = 0, volt = 0, resistance = 0;
    cin >> volt >> resistance;
    current = volt / resistance;
    cout << "Ток в электрической цепи: " << current << " ампер" << endl;

    cout << "Нахождение площади прямоугольника\n";
    float area = 0, aSide = 0, bSide = 0;
    cin >> aSide >> bSide;
    area = aSide * bSide;
    cout << "Площадь прямоугольника: " << area << " см./2" << endl;
    cout << "Нахождение периметра прямоугольника\n";
    float perimeter = (aSide + bSide) * 2;
    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Вычисление суммы натуральных чисел\n";
    int num = 0, sum = 0;
    cin >> num;
    sum = num * (num + 1) / 2;
    cout << "Сумма натуральных чисел: " << sum << "\n";

    cout << "Подсчёт количества цифр в натуральном числе\n";
    auto n = 0; // лучше использовать auto
    cout << "Введите любое натуральное число: ";
    cin >> n;
    int digitalCount = floor(log10(n)) + 1;
    cout << "Size num: " << digitalCount << endl;

    cout << "Преобразовать время в секундах в часы минуты и секунды\n";
    int sec = 0, hour = 0, min = 0;
    cin >> sec;
    hour = sec / 3600; // В 60 минутах 3600 секунд
    sec -= hour * 3600;
    min = sec / 60;
    sec -= min * 60;
    cout << hour << " hour " << min << " min " << sec << " sec" << "\n";
    return 0;
}


// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
