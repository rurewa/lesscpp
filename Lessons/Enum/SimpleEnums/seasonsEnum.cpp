// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// seasonsEnum.cpp SimpleEnums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Seasons { SPRING, AUTUMN, SUMMER, WINTER };

int main() {
    bool exit = true; // Выбор пользователя - продолжить или выйти
    /* while (cin >> exit) {
        cout << "Нужно выбрать время года: весна - 0, осень - 1, лето - 2, зима - 3\n";
        int yourSeasons = 0;
        cin >> yourSeasons;
        //Seasons season = static_cast<Seasons>(yourSeasons);
        Seasons season = Seasons(yourSeasons);
        switch (season)
        {
            case SPRING:
                cout << "Природа оживает!\n";
                break;
            case AUTUMN:
                cout << "Листья опадают!\n";
                break;
            case SUMMER:
                cout << "Душа радуется!\n";
                break;
            case WINTER:
                cout << "Можно кататься на коньках.\n";
                break;
            default:
                cout << "Других времён года нет!\n";
                break;
            }
        cout << "Чтобы снова смотреть времена года, нажмите 1\n";
        cin >> exit;
    } */
    do {
        cout << "Нужно выбрать время года: весна - 0, осень - 1, лето - 2, зима - 3\n";
        int yourSeasons = 0;
        cin >> yourSeasons;
        //Seasons season = static_cast<Seasons>(yourSeasons); // Сначала так!
        Seasons season = Seasons(yourSeasons);
        switch (season)
        {
            case SPRING:
                cout << "Природа оживает!\n";
                break;
            case AUTUMN:
                cout << "Листья опадают!\n";
                break;
            case SUMMER:
                cout << "Душа радуется!\n";
                break;
            case WINTER:
                cout << "Можно кататься на коньках.\n";
                break;
            default:
                cout << "Других времён года нет!\n";
                break;
            }
        cout << "Чтобы снова смотреть времена года, нажмите 1\n";
        cin >> exit;
    } while (exit);
    return 0;
}
/* Output:
Нужно выбрать время года: весна - 0, осень - 1, лето - 2, зима - 3
3
Природа оживает!
Чтобы снова смотреть времена года, нажмите 1
0
*/
// Задание
/* Сделать тоже самое, но с просто while (без do) */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
