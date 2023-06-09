// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Операторы сравнения + логические операции
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha; // Для отображения слов true и false
    int a = 5, b = 5;
    bool result;
    result = (a == b); // Сравнение
    cout << "a == b: " << result << '\n';
    result = (a != b); // Не равно
    cout << "a != b: " << result << '\n';
    result = (a == b) || (a != b); // Логическое ИЛИ
    cout << "(a == b) || (a != b) " << result << '\n';
    result = (a == b) && (a != b); // Логическое И
    cout << "(a == b) && (a != b) " << result << '\n';
    result = (a == b) != (a != b); // Логическое И
    cout << "(a == b) != (a != b) " << result << '\n';
    // Битовые операции
    result = (a == b) xor (a != b); // ТОЛЬКО ОДИН
    cout << "(a == b) xor (a != b) " << result << '\n';
    result = !(a == b) xor (a != b); // ТОЛЬКО ОДИН
    cout << "!(a == b) xor (a != b) " << result << '\n';
    /*Битовая операция XOR. Результат равен 1, если любой из двух битов равен 1,
      но не в том случае, если оба бита равны. Там, если ни один из них или
      оба они не равны 1, результат равен 0.*/
    result = (a == b) ^ (a != b); // Исключающее ИЛИ
    cout << "!(a == b) ^ (a != b) " << result << '\n';
    // Сравнение булевых значений
    bool True = true, False = false;
    cout << "True != False: " << ((True != False) ? true : false) << '\n';
    cout << "True == False: " << ((True == False) ? true : false) << '\n';
    string EQUAL = "Одинаковы", NO_EQUAL = "Не одинаковы";
    cout << "Слова: " << EQUAL << " и " << NO_EQUAL << ": "<< ((EQUAL == NO_EQUAL) ? EQUAL : NO_EQUAL) << '\n';
    // Сравненние символов
    char chA = 'a', chB = 'b';
    cout << "chA != chB: " << ((chA != chB) ? true : false) << '\n'; // С использованием тернарного оператора
    // Сравнение строк
    /*
    char alex[] = {"Alex"};
    char roma[] = {"Roma"};
    cout << ((alex == roma) ? true : false) << '\n'; // Ошибка
    */
    string dany = "Dany", fedy = "Fedy";
    cout << "dany != fedy: " << ((dany != fedy) ? true : false) << '\n'; //
    return 0;
}
// Output:
/*
Слова: Одинаковы и Не одинаковы: Не одинаковы
True != False: true
True == False: false
a != b: true
dany != fedy: true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
