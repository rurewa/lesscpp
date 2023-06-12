// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// seasonsEnum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Seasons { AUTUMN, WINTER, SPRING, SUMMER };

int main() {
    bool exit = true; // Выбор пользователя: продолжить или выйти
    do {
        cout << "Нужно выбрать время года: осень - 0, зима - 1, весна - 2, лето - 3\n";
        int yourSeason = 0;
        cin >> ws >> yourSeason;
        //Seasons season = static_cast<Seasons>(yourSeason);
        Seasons season = Seasons(yourSeason);
        switch (season)
        {
            case AUTUMN:
                cout << "Листья падают\n";
                break;
            case WINTER:
                cout << "Можно кататься на коньках\n";
                break;
            case SPRING:
                cout << "Природа оживает\n";
                break;
            case SUMMER:
                cout << "Душа радуется\n";
                break;
            default:
                cout << "Других времён года нет!\n";
                break;
        }
        cout << "Чтобы снова смотреть времена года нажмите 1\n";
        cin >> ws >> exit;
    } while(exit);
    return 0;
}
/* Output:


*/
// Задание
/*
То же самое, но с while
 */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
