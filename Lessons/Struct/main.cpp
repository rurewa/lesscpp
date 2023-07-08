// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структура и перечисление. Ввод показаний погодных условий
// Struct weather.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class Month {
    JAN = 1, FEB, MAR
};

struct Weather {
    short avgHiTepm;
    short avgLoTepm;
    float actualRainfall;
    float recordRainfall;
};

int main() {
    Weather weatherListType[12];
    for (Month i = Month::JAN; i <= Month::MAR; ++(int&)i) {
        cout << (int&)i << " месяц " << "Высокая температура: ";
        cin >> weatherListType[(int&)i].avgHiTepm;
        cout << "Низкая температура: ";
        cin >> weatherListType[(int&)i].avgLoTepm;
        cout << "Актуальные осадки: ";
        cin >> weatherListType[(int&)i].actualRainfall;
        cout << "Рекордные осадки: ";
        cin >> weatherListType[(int&)i].recordRainfall;
    }
    cout << "\nMonth \tHiTemp \t LoHi\t ActualRain \tRecordRain\n";
    for (Month i = Month::JAN; i <= Month::MAR; ++(int&)i) {
        cout << (int&)i << '\t' << weatherListType[(int&)i].avgHiTepm;
        cout << '\t' << weatherListType[(int&)i].avgLoTepm;
        cout << "\t\t" << weatherListType[(int&)i].actualRainfall;
        cout << "\t\t" << weatherListType[(int&)i].recordRainfall << '\n';
    }
    return 0;
}
// OUTPUT
/*
 Month   HiTemp          ActualRain      RecordRain
1       1       2               1               2
2       1       2               1               2
3       1       2               1               2
*/
// Задание
/*
Дописать эту программу в 12 месяцев
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //