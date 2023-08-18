// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-//
// Рекурсии на примере вычисления факториала числа
// recFact.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include<iostream>
using namespace std;

int recF(int n) { // Объявляем подпрограмму-функцию вычисления факториала рекурсией
    int f = 0; // Объявляем возвращаемое в caller значение фаториала
    if (n <= 1) { // Если натуральное число меньше или равно 1
        f = 1;    // То возвращаем 1. Потому, что при 1-це раскладывать на множители нечего
    }
    else { // Иначе вычисляем (например, если n = 6)
        f = n * recF(n - 1);
    }
    return f;
}

int fRec(int n) { // Вычисление факториала циклом
    int f = 1; // Начальное число
    while (n > 1) {
        f *= n;
        n -= 1;
    }
    return f;
}

int main() { // Caller (Вызов)
    cout << "Факториал числа 1: " << recF(1) << endl;
    cout << "Факториал числа 2: " << recF(2) << endl;
    cout << "Факториал числа 3: " << recF(3) << endl;
    cout << "Факториал числа 4: " << recF(4) << endl;
    cout << "Факториал числа 5: " << recF(5) << endl;
    cout << "Факториал числа 6: " << recF(6) << endl; //
    cout << "Факториал числа 7: " << fRec(7) << endl;
    return 0;
}
// Output:
/*
Факториал числа 1: 1
Факториал числа 2: 2
Факториал числа 3: 6
Факториал числа 4: 24
Факториал числа 5: 120
Факториал числа 6: 720
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//