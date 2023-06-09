// Арифметика натуральных чисел
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // Сложение
    int a = 5, b = 7, result = 0;
    result = a + b;
    cout << "Сложение: " << result << "\n";
    // Вычитание
    result = a - b;
    cout << "Вычитание: " << result << "\n";
    unsigned uResult = a - b; // Переполнение!
    cout << "Переполнение: " << uResult << "\n";
    // Произведение
    result = a * b;
    cout << "Произведение: " << result << "\n";
    // Разность
    result = a / b;
    cout << "Разность: " << result << "\n"; // Показывает только целую часть!
    // Вычисления с присваиванием
    // Сложение с присваиванием
    result += a; // result = result + a
    result += a; // + 5
    cout << "Сложение с присваиванием: " << result << '\n';
    result ^= result; // Очистка переменной
    // Вычитание с присваиванием
    result -= b;
    cout << "Вычитание с присваиванием: " << result << '\n';
    result ^= result;
    // Произведение с присваиванием
    result *= a;
    cout << "Произведение с присваиванием: " << result << '\n';
    result ^= result;
    // Деление с присваниванием
    result /= a; // 0 / 5
    cout << "Деление с присваниванием: " << result << '\n';
    // Префиксный инкремент
    result ^= result;
    cout << "Инкремент: " << ++result << '\n'; // Увеливение на +1
    // рефиксный декремент
    result ^= result;
    cout << "Декремент: " << --result << '\n'; // Уменьшение на -1
    // Вычисление степени числа
    long long degree = 0;
    degree = pow(a, b); // Где a - возводимое число, b - степень
    cout << "Вычисление степени числа: " << degree << '\n';
    // Отрицательные числа
    result ^= result;
    a = -a; // Делаем a отрицательным числом
    result = a + b;
    cout << "-a: " << result << '\n';
    result ^= result;
    result = a - b;
    cout << "a - b: " << result << '\n';
    result ^= result;
    result = a - -b;
    cout << "-a - -b: " << result << '\n';
    // Остаток от целочисленного деления
    int c = 2, d = 3; // Когда 1-е число меньше второго
    result ^= result;
    result = c % d;
    cout << "Остаток от 2 % 3: " << result << '\n';
    c = 3, d = 2; // Когда 1-е число больше второго
    result = c % d;
    cout << "Остаток от 3 % 2: " << result << '\n';
    // Программа для нахождения последнего цифры в числе
    int num = 123456460;
    cout << num % 10 << '\n';
    return 0;
}
