// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример базовых операций с фиксированными одномерными массивами
// moreFixArr.cpp Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
using namespace std;

// Строки в C++ являются массивами

int main() {
    puts("Ещё символьный массив");
    char ch[] = {'H', 'e', 'l', 'l', 'o', ',', ' ',
                 'W', 'o', 'r', 'l', 'd', '!'};
    cout << ch << endl;
    puts("Размер символьного массива ch:");
    int sizeArr = sizeof(ch);
    cout << sizeArr << '\n';
    puts("Символьный массив");
    char word[] = {"Word!"}; // C-style способ. Не рекомендуется так делать
    cout << word << '\n';
    puts("Размер символьного массива ch:");
    int sizeWord = sizeof(word);
    cout << sizeWord << '\n'; // 6, потому, что автоматически вставляется
                              // 0-терминатор для конца строки
    char myCharArr[] {'T', 'o', 't', 'a',
                     'l'}; // Юниформ инициализация - без оператора '=',
                           // является предпочтительной
    // В современных версиях C++ равно '=' можно не указывать.
    puts(myCharArr); /* Так как mySharArr является строкой, а все строки в C++
    есть массивы, такие переменные можно вызывать в puts(); */
    puts("Содержимое символьного массива с помощью цикла");
    for (auto i : myCharArr) { cout << i; }
    cout << '\n';
    puts("Изменить один элемент символьного массива");
    myCharArr[0] = '8';
    cout << myCharArr << '\n';
    puts("Изменить все элементы символьного массива");
    const int LENGHT = sizeof(myCharArr);
    int change = 76;
    for (int i = 0; i != LENGHT; ++i) {
      myCharArr[i] = ++change;
    }
    cout << myCharArr << '\n';
    puts("Изменение всех элементов символьного массива с интересным эффектом");
    for (int i = 0; i != LENGHT; ++i) {
      myCharArr[i] = ++change;
      cout << myCharArr << ' ';
    }
    cout << '\n';
    /* cout << "Массив вещественных чисел\n";
    float fl[4] = {0};
    float ff = 0.0;
    for (int f = 0; f <= 4; ++f) {
       cout << (fl[f] = {ff += 0.1}) << " ";
    }
    cout << "\n";
    cout << "Заполнение массива вручную\n";
    int man[3];
    cout << "Введите по очереди три целых числа\n";
    int b, c, d;
    cin >> b >> c >> d; // Ввод данных пользователем
    man[0] = {b};
    man[1] = {c};
    man[2] = {d};
    cout << "Содержимое пользовательского массива: " << man[0] << " " << man[1]
    << " " << man[2] << endl;
    // Используем перечисление (константу) в качестве индекса
    cout << " \n";
    enum {
       INDEX = 0
    };
    arr[INDEX] = {5};
    cout << arr[0] << endl;
    // Используем переменную (не константу) в качестве индекса
    short index = 4;
    arr[index] = {50};
    cout << arr[index] << endl;
    cout << endl;
    // Фиксированные массивы не могут быть runtime!
    int array[5]; // массив содержит 5 простых чисел
    array[0] = 4;
    array[1] = 5;
    array[2] = 8;
    array[3] = 9;
    array[4] = 12;
    for (int i = 0; i <= 4; ++i) {
       cout << array[i] << endl;
    }
    // Ещё один способ получить содержимое фиксированного массива
    cout << endl;
    for (auto t : array) {
       cout << t << " ";
    } */

    return 0;
}
// Output
/*
целочисленный массив
Размер массива: 5
Содержимое массива: 1
Содержимое 2-го индекса массива: 14
Заполняем индексы массива при помощи счётчика
1 2 3 4 5 Символьный массив
Hello, World!
Массив вещественных чисел
0.1 0.2 0.3 0.4 0.5
Заполнение массива вручную
Ввежите по очереди три целых числа
45
32
69
Содержимое ручного масстива: 45 32 69
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
