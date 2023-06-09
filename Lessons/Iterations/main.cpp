// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Итераторы, начало.
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <array> // Фиксированные массивы типа array
//#include <iterator>
using namespace std;

int main() {
    // Автоматическое определение типа как array<int, 7> (Стандарт C++17)
    array data {0, 1, 2, 3, 4, 5, 6};
    size_t length {size(data)};
    cout << "Размер массива data: " << length << '\n';
    size_t index  {0};
    cout << "С помощью цикла While и явного индекса\n";
    while (index != length) {
        cout << data[index] << ' ';
        ++index;
    }
    cout << "\nСчётчик For с явным индексом\n";
    for (index = 0; index != length; ++index) {
        cout << data[index] << ' ';
    }
    cout << "\nСчётчик For с указателем и ссылками\n";
    for (auto ptr{&data[0]}; ptr != (&data[0] + length); ++ptr) {
        cout << *ptr << ' ';
    }
    cout << "\nСчётчик For с явным указанием диапазона\n";
    for (auto i : data) {
        cout << i << ' ';
    }
    cout << "\nУказатели в качестве итераторов\n";
    auto begin {&data[0]};
    auto end {begin + size(data)};
    for (auto ptr {begin}; ptr != end; ++ptr) {
        cout << *ptr << ' ';
    }
    cout << "\nС использованием итераторов из библиотеки iterator\n";
    // начальная точка; конечная точка; оператор ++ для перемещения итератора к следующему элементу (или к
    //концу); оператор * для получения значения текущего элемента.
    auto ibegin{std::begin(data)};
    auto iend{std::end(data)};
    for (auto p {ibegin}; p != iend; ++p) {
        cout << *p << ' ';
    }
    cout << "\nВ сущности, это тоже, что и: \n";
    for (auto i : data) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}
// Output:
/*
Размер массива data: 7
С помощью цикла While и явного индекса
0 1 2 3 4 5 6
Счётчик For с явным индексом
0 1 2 3 4 5 6
Счётчик For с указателем и ссылками
0 1 2 3 4 5 6
Счётчик For с явным указанием диапазона
0 1 2 3 4 5 6
Указатели в качестве итераторов
0 1 2 3 4 5 6
С использованием итераторов из библиотеки iterator
0 1 2 3 4 5 6
В сущности, это тоже, что и:
0 1 2 3 4 5 6
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
