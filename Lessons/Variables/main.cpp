// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Определение минут и часов по количеству секунд
// findMinHour.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() { // Главная функция программы
    auto sec = 0;
    puts("Введите количество секунд");
    cin >> ws >> sec;
    int timeSecs = (sec % 3600) % 60; // Секунды
    int timeMins = (sec % 3600) / 60; // Минуты
    int timeHours = (sec / 3600);     // Часы
    cout << "Сек. " << "Мин." << "Час." << '\n';
    cout << timeSecs << " : " << timeMins << " : " << timeHours << '\n';
    return 0;
}
// Д.З.
// Output:
/*
Введите количество секунд
63546
Сек. Мин.Час.
6 : 39 : 17
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//