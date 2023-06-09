// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример использования логических значений для определения результата.
// При каких условиях курьер доставит заказ вовремя?
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha);
    cout << "Доставка заказа курьером" << endl;
    bool delivered = false;
    cout << "Есть ли пробки? ";
    bool trafficJams = false;
    cin >> trafficJams;
    cout << "Сломался ли автомобиль курьера? ";
    bool drive = false;
    cin >> drive;
    cout << "Попал ли курьер в дтп? ";
    bool crash = false;
    cin >> crash;
    delivered = !(trafficJams || (drive || crash)); // Проверка условий
    //delivered = !trafficJams && !(drive || crash); // Проверка условий
    cout << delivered << endl;
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//