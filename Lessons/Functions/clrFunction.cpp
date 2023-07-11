// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Пример "чистой" функции и "не чистой" функций
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int x = 2, y = 5, z;

// Чистая функция. Запускает счётчик операций
int pure(int a, int b) {
    int result = 1, i;
    for (i = 0; i != b; ++i) {
      result *= a;
    }
    return result;
}

int noPure() { // Нечистая функция, которая делает тоже самое
    cout << "Введите 2-а числа\n";
    int x = 0, y = 0;
    cin >> x >> y;
    int result = 1, i;
    for (i = 0; i != y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    /* z = pure(x, y);
    cout << z << endl; // Результат 32 */
    /*
    * 2=1*2
    * 4=2*2
    * 8=4*2
    * 16=8*2
    * 32=16*2
    */
    z = noPure();
    cout << z << endl;
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//