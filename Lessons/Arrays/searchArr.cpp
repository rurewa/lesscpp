// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Поиск значений в массиве
// searchArr.cpp в папке Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(0));
    const int SIZE = 10; // задаём размер будущего массива
    int find = 0, counter = 0; // Переменные для поиска и счётчик
    int arr[SIZE] {0}; // Создаём массив с нулевыми значениями
    for (int i = 0; i != SIZE; ++i) {
        arr[i] = (rand() % 10); // Заполняем случайными значениями
    }
    for (auto i : arr) {
        cout.flush() << i << ' '; // Выводим на дисплей все значения
        sleep(1);
    }
    cout << endl;
    for (int i = 0; i != SIZE; ++i, sleep(1)) { // Перебираем каждый элемент
        cout << "index: " << i << ' '; // Диагностика поиска
        if (arr[i] == find) { // Ищем соответствие
            puts("Found!");
            ++counter;
        }
        else { puts("Not found!"); }
    }
    cout << "Found: " << find << ' ' << counter << " times" << endl;
    return 0;
}
/* Output:
8 3 2 4 9 2 2 3 0 2
8 Not found!
3 Not found!
2 Not found!
4 Not found!
9 Not found!
2 Not found!
2 Not found!
3 Not found!
0 Found!
2 Not found!
Found: 0 1 times
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //