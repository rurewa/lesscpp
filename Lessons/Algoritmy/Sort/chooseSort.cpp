//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Сортировка массива методом выбора
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int LENGHT = 5;
    int array[LENGHT] = {30, 50, 20, 10, 40};
    // Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому премени, когда мы до него доберёмся)
    for (int startIndex = 0; startIndex < LENGHT - 1; ++startIndex) {
        // В переменной slallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации
        // Начнём с того, что наименьший индекс в этой итерации - это первый элемент (индекс - 0)
        int smallestIndex = startIndex;
        // Затем ищем элемент поменьше в остальной части массива
        for (int currentIndex = startIndex + 1; currentIndex < LENGHT; ++currentIndex) {
            // Если мы нашли элемент, который меньше нашего наименьшего,
            if (array[currentIndex] < array[smallestIndex]) {
                // То запоминаем его
                smallestIndex = currentIndex;
            }
        }
        // smallestIndex теперь наименьший элемент.
        // Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
        swap(array[startIndex], array[smallestIndex]);
    }
    // Тперь, когда весь массив  отсортирован - выводим его на экран
    for (auto i : array) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
// Output
/*
10 20 30 40 50
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
