// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Генератор численно-символьных паролей в пользовательском диапазоне
// genNumCharpasswd.cpp Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;
int main(){
    srand(time(0));
    const int SIZE = 90;
    int arr[SIZE] {0};
    int passIndex = 32; // Отсчёт от этого символа по таблице ASCII
    for (int i = 0; i != SIZE; ++i) { // Тут я заполняю массив числовыми кодами
        arr[i] = ++passIndex;
    }
    /* for (auto i : arr) { // Это для проверки содержимого массива
        cout << i << ' ';
    }
    cout << endl;
    */
    puts("Введите размер пароля от 3 до 10");
    short sizePass = 0;
    cin >> ws >> sizePass;
    int secret = 0, lowLimit = 2, highLimit = 10;
    if ((sizePass > lowLimit) && (sizePass <= highLimit)) {
        for (int i = 0; i != sizePass; ++i) {
            secret = (rand() % 90);
            cout << (char)arr[secret];
        }
    }
    else {
        puts("Размер пароля вне установленного диапазона!");
    }
    cout << endl;
    return 0;
}
// OUTPUT
/*
Введите размер пароля от 3 до 10
8
u^a(bI:g
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //