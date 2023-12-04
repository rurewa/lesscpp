// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Вывод счётчика с секундной задержкой
// revCounter.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    const int MIN_NUM = 0; // Минимальное число
    int sec = 5;   // Секунды
    while (sec != MIN_NUM) {
        cout << sec << endl; //выводим каждую секунду с новой строки
        --sec;
        sleep(1);
    }
    return 0;
}
// Output:
/*
1
2
3
4
5
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//