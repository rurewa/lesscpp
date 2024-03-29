// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Счётчик итераций и циклов
// counterCycles.cpp While
// V 1.0
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
#include <iostream>
using namespace std;

int main() {
    cout << "Введите символ z\n";
    char userInput;
    int countTime = 0, countCycles = 1, total = 0;
    while (cin >> userInput) {
        if (countTime == 3) {
            countTime = 0;
            ++countCycles;
        }
        cout << "Количество подходов в цикле: " << ++countTime
             << " Количество циклов " << countCycles
             << " Общее количество подходов: " << ++total << '\n';
        if (countCycles == 3 && countTime == 3) {
            break; // Прыжок из цикла
        }
    }
    return 0;
}
// Output
/*
Введите символ z
z
Количество подходов в цикле: 1 Количество циклов 1 Общее количество подходов: 1
z
Количество подходов в цикле: 2 Количество циклов 1 Общее количество подходов: 2
z
Количество подходов в цикле: 3 Количество циклов 1 Общее количество подходов: 3
z
Количество подходов в цикле: 1 Количество циклов 2 Общее количество подходов: 4
z
Количество подходов в цикле: 2 Количество циклов 2 Общее количество подходов: 5
z
Количество подходов в цикле: 3 Количество циклов 2 Общее количество подходов: 6
z
Количество подходов в цикле: 1 Количество циклов 3 Общее количество подходов: 7
z
Количество подходов в цикле: 2 Количество циклов 3 Общее количество подходов: 8
z
Количество подходов в цикле: 3 Количество циклов 3 Общее количество подходов: 9
*/
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// END FILE
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=