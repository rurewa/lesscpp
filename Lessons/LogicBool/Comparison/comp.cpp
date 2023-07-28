// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа примеров сравнения значений переменных
// comp.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

int main() {
    cout << boolalpha; // Для отображения слов true и false
    cout << true << '\t' << false << endl; // Логические Истина и Ложь (1 и 0)
    int firstNum = 5, secondNum = 7;
    bool result = firstNum < secondNum;
    cout << "5 < 7:\t" << result << '\n'; // Меньше
    result = firstNum <= secondNum;
    cout << "5 <= 7:\t" << result << '\n'; // Меньше или равно
    result = secondNum > firstNum;
    cout << "7 > 5:\t" << result << '\n'; // Больше
    result = secondNum >= firstNum;
    cout << "7 >= 5:\t" << result << '\n'; // Больше или равно
    result = (5 == 7); // Равно
    cout << "5 == 7:\t" << result << '\n';
    result = (5 != 7); // Не равно
    cout << "5 != 7:\t" << result << '\n';
    // Сравненние символов
    char chA = 'a', chB = 'b';
    cout << "chA != chB:\t" << ((chA != chB) ? true : false) << '\n';
    string str1 = "Ivan", str2 = "Ivan";
    cout << "str1 == str2:\t" << ((str1 == str2) ? true : false) << '\n';
    return 0;
}
/* result = (5 ^ 7); // Побитовое ИЛИ
cout << "5 ^ 7:\t" << result << '\n';
result = (5 xor 5); // Исключающее ИЛИ
cout << "5 xor 5:\t" << result << '\n';
Битовая операция XOR. Результат равен 1, если любой из двух битов равен 1,
но не в том случае, если оба бита равны. Там, если ни один из них или
оба они не равны 1, результат равен 0.
*/

// Output:
/*
true    false
5 < 7:  true
7 > 5:  true
5 == 7: false
5 != 7: true
5 ^ 7:  true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//