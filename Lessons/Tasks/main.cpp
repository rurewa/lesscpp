// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Генератор численно-символьных паролей в пользовательском диапазоне
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;
int main(){
    srand(time(0));
    int arr[90] {};
    int passIndex = 32; // От этого символа по таблице ASCII
    for (int i = 0; i != 90; ++i) { // Тут я заполняю массив числовыми кодами
        arr[i] = ++passIndex;
    }
    /* for (auto i : arr) { // Это для проверки содержимого массива
        cout << i << ' ';
    }
    cout << endl;
    */
    cout << "Введите размер пароля от 3 до 10\n";
    short sizePass = 0;
    cin >> ws >> sizePass;
    int secret = 0;
    if (sizePass > 2 && sizePass <= 10) {
        for (int i = 0; i != sizePass; ++i) {
            secret = 0 + (rand() % 90);
            cout << (char)arr[secret];
        }
    }
    else {
        cout << "Размер пароля вне установленного диапазона!\n";
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