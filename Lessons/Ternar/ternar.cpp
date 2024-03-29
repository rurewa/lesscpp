// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Тернарный оператор
// ternar.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/* Синтаксит тернарного оператора
Условие ? 1-е действие : 2-е действие */

int main() { // Главная функция программы
    puts("Сколько будет 8*7 ?\nВведите ваш ответ");
    int guess = 0; // Объявили и инициализаровали переменную для ответа
    cin >> ws >> guess; // Приняли от пользователя число
    bool result = false; // Объявили и инициализировали переменную для результата
    result = (guess == (8 * 7)) ? true : false; // Произвели вычисление и сравнение с ответом пользователя
    cout << boolalpha << result << '\n'; // Напечатали на дисплее результат
    return 0;
}
// Д.З.
// Output:
/*
Сколько будет 8*7 ?
Введите ваш ответ
57
false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//