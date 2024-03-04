// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример базовых операций с фиксированными одномерными массивами
// charFixArr.cpp Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
using namespace std;
// Строки в C++ являются массивами

int main() {
    cout << "Символьный массив" << endl;
    char word[] = {"Word!"}; //НЕ РЕКОМЕНДУЕТСЯ
    cout << word << endl;
    cout << "Размер символьного массива" << endl;
    int sizeWord = sizeof(word);
    cout << sizeWord - 1 << endl;
    cout << "Tip: " << typeid(word).name() << endl;
    cout << "Размер массива: " << sizeWord - 1 << " 1-й элемент массива "
         << *word << endl;
    cout << "Символьный массив" << endl;
    char ch[] {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
    // /0 - нуль терминатор, конец строки, невидимый символ
    cout << ch << endl;
    puts("Размер символьного массива ch");
    int sizeArr = sizeof(ch);
    cout << sizeArr << ", 1 - ый элемент массива ch: " << *ch << endl;
    puts("Символьные массив и цикл");
    char myCharArr[] {'T', 'o', 't', 'a', 'l'};
    // Юниформ инициализация - без оператора '=' является предпочтительной
    // В современных версиях C++ равно можно не использовать
    puts(myCharArr); //Является строкой
    cout << "Содержимое массива с помощью цикла " << endl;
    for (auto i : myCharArr) { cout << i; }
    cout << endl;
    cout << "Изменим один элемент символьного массива " << endl;
    myCharArr[0] = '8';
    cout << myCharArr << endl;
    cout << "Изменить все в массиве " << endl;
    const int LENGHT = sizeof(myCharArr);
    int change = 76;
    for (int i = 0; i != LENGHT; ++i) {
        myCharArr[i] = ++change;
    }
    cout << myCharArr << endl;
    cout << "С интересным эффектом " << endl;
    for (int i = 0; i != LENGHT; ++i) {
        myCharArr[i] = ++change;
        cout << myCharArr << ' ';
    }
    cout << endl;
    const int HELLO[] {72, 69, 76, 76, 79};
    for (auto i : HELLO) { cout << (char)i; }
    cout << endl;
    return 0;
}
// Output
/*
Символьный массив
Word!
Размер символьного массива
5
Tip: A6_c
Размер массива: 5 1-й элемент массива W
Символьный массив
Hello, world!
Размер символьного массива ch
14, 1 - ый элемент массива ch: H
Символьные массив и цикл
Total
Содержимое массива с помощью цикла
Total
Изменим один элемент символьного массива
8otal
Изменить все в массиве
MNOPQ
С интересным эффектом
RNOPQ RSOPQ RSTPQ RSTUQ RSTUV
HELLO
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
