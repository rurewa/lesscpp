// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Поиск в с-style массиве
// findSubString.cpp Arrays
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    char char_arr[] = "Hello, Word!";
    // Массив char_arr содержит 2-е подстроки. substring - подстрока
    const char *SUB_STRING = "Hello";
    /* Язык C++ поддерживает еще один способ создания символьных констант строк C-
       style — через указатель */
    // Преобразуем символьный массив в строку типа string
    string char_arr_str = char_arr;
    // используем метод find из библиотеки string
    if (char_arr_str.find(SUB_STRING) != string::npos) {
        cout << SUB_STRING << " подстрока найдена в массиве: " << char_arr_str
             << endl;
    } else {
        cout << SUB_STRING
             << " подстрока не найдена в массиве: " << char_arr_str << endl;
    }
    /* Метод find объекта std::string возвращает позицию первого вхождения
    подстроки или символа в строке.
    Если подстрока или символ не найдены, метод возвращает std::string::npos */
    puts("Другой способ");
    string mainStr = char_arr;
    auto pos = mainStr.find("o"); // auto - тут size_t. Тут происходит вычисление позици в массиве
    /* Тип size_t обычно применяется для счетчиков циклов, индексации массивов,
    хранения размеров, адресной арифметики. Так как его размер совпадает с размером
    указателя. Если для этих целей использовать (unsigned int ) то на 64х разрядной
    платформе могут быть проблемы с корректной работой приложения, а также
    теоретическое(на уровне одной - двух лишних инструкций) снижение производительности
    при индексации.
    https://ru.stackoverflow.com/questions/387641/Что-за-тип-size-t
    */
    const char *SU_STR = "o";
    if (pos != string::npos) {
        cout << "Найдено '" << SU_STR << "' на позиции: " << pos << endl;
    } else {
        cout << "Не удалось найти." << endl;
    }
    return 0;
}
// Д.З.
// OUTPUT // ВОЗМОЖНЫЙ РЕЗУЛЬТАТ
/*
Hello подстрока найдена в массиве: Hello, Word!
Другой способ
Найдено 'o' на позиции: 4
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //