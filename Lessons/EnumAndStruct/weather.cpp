// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Ввод показаний температуры и осадок для статистики
// weatherStat.cpp Struct
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum class MonthType {
    JAN = 1, FEB, MAR
};

struct WeatherType
{
    int avgHiTemp;
    int avgLoTepm;
    float acturlRainfall;
    float recordRainfall;
};

int main() {
    WeatherType WeatherListType[12];
    for (MonthType i = MonthType::JAN; i <= MonthType::MAR; ++(int&)i) {
        cout << (int&)i << " месяц. " << "Высокая температура : ";
        cin >> WeatherListType[(int&)i].avgHiTemp;
        cout << "Низкая температура : ";
        cin >> WeatherListType[(int&)i].avgLoTepm;
        cout << "Actual Rain : ";
        cin >> WeatherListType[(int&)i].acturlRainfall;
        cout << "Record Rain : ";
        cin >> WeatherListType[(int&)i].recordRainfall;
    }
    cout<<"\n Month \t HiTemp\t LoTemp\t ActualRain\t RecordRain\n";
    for (MonthType i = MonthType::JAN; i <= MonthType::MAR; ++(int&)i) {
        cout << (int&)i << '\t' << WeatherListType[(int&)i].avgHiTemp;
        cout << '\t' << WeatherListType[(int&)i].avgLoTepm;
        cout << "\t\t" << WeatherListType[(int&)i].acturlRainfall;
        cout << "\t\t" << WeatherListType[(int&)i].recordRainfall << '\n';
    }
    return 0;
}

/* Output:
1 месяц. Высокая температура : 10
Низкая температура : -20
Actual Rain : 11
Record Rain : 15
2 месяц. Высокая температура : -15
Низкая температура : -30
Actual Rain : 13
Record Rain : 16
3 месяц. Высокая температура : 5
Низкая температура : -15
Actual Rain : 9
Record Rain : 16

 Month   HiTemp  LoTemp  ActualRain      RecordRain
1       10      -20             11              15
2       -15     -30             13              16
3       5       -15             9               16
*/
// Задание
/*Дописать эту программу, чтобы было 12 мес.*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//