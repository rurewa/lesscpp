// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример использования логических значений для определения результата.
// При каких условиях человек попадёт на работу?
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha);
    cout << "Попадёт ли человек на работу, если:" << endl;
    bool working;
    cout << "На улице идёт дождь? ";
    bool rain; //
    cin >> rain;
    cout << "Человек взял с собой зонт? ";
    bool umbrella; //
    cin >> umbrella;
    cout << "Автобус приехал? ";
    bool bus; //
    cin >> bus;
    working = bus && (!rain || umbrella); // Проверка условий
    cout << working << endl;
}
// Output
/*
Попадёт ли человек на работу, если:
На улице дождь? 1
Есть ли у человека зонт? 0
Автобус приехал? 1
Попадёт ли человек на работу? false
*/
/*
1) Дождь
2) Зонт
3) Автобус
1+1+1 = 1
1+1+0= 0
1+0+0= 0
1+0+1= 0
0+1+1= 1
0+0+1= 1
0+0+0= 0
1+0+1= 1
*/
/*
    if (rain == true && umbrella == true && bus == true) { // 111 = 1
        working = true;
    }
    else if (rain == true && umbrella == true && bus == false) { // 110 = 0
        working = false;
    }
    else if (rain == true && umbrella == false && bus == false) { // 100 = 0
        working = false;
    }
    else if (rain == false && umbrella == false && bus == false) { // 000 = 0
        working = false;
    }
    else if (rain == false && umbrella == false && bus == true) { // 001 = 1
        working = true;
    }
    else if (rain == false && umbrella == true && bus == true) { // 011 = 1
        working = true;
    }
    else if (rain == false && umbrella == true && bus == false) { // 010 = 0
        working = false;
    }
    else { //101 = 0
        working = false;
    }
    */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//