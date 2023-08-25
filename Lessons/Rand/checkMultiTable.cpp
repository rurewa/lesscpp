// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Проверка знаний таблицы умножения
// chekMultiplicTable.cpp Rand
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    srand(time(0)); // Инициализация генератора
    cout << boolalpha;
    int one = 0, two = 0, min = 1, max = 9, result = 0, answer = 0;
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    one = (int)(rand() * FRACTION * (max - min + 1) + min); // Генерируем 1-е число
    two = (int)(rand() * FRACTION * (max - min + 1) + min); // Генерируем 2-е число
    result = one * two;
    cout << one << " x " << two << endl;
    cout << "Введите ответ: ";
    cin >> ws >> answer;
    cout << (result == answer ? true : false ) << endl;
    cout << (result == answer ? "✅" : "❌" ) << endl;
    /* int min = 1, max = 9, result = 0, count = 0;
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    while (true) {
        result = (int)(rand() * FRACTION * (max - min + 1) + min);
        ++count;
        if (result == 9) {
            cout << result << " from " << count << endl;
            return 0;
        }
    } */
    return 0;
}
// Output:
/*
6 x 3
Введите ответ: 12
false
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//