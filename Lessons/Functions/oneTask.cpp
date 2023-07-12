// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Правило "одной задачи"
// oneNumFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

const int x = 2, y = 5;

// Функция выполняет только одну задачу - запускает счётчик операций
int oneTask(int a, int b) {
    int result = 1, i;
    for (i = 0; i != b; ++i) {
      result *= a;
    }
    return result;
}

// Функция, которая нарушает правило одной задачи
int notOneTask() { // Делает то же самое
    cout << "Введите 2-а числа\n";
    int x = 0, y = 0;
    cin >> x >> y; // Принимает пользовательский ввод
    int result = 1, i;
    for (i = 0; i != y; ++i) { // Вычисляет
        result *= x;
    }
    return result;
}

int getNum() {
    cout << "Введите число\n";
    int num = 0;
    cin >> ws >> num; // Принимает пользовательский ввод
    return num;
}

int calc(int num1, int num2) {
    int result = 1, i;
    for (i = 0; i != num2; ++i) {
      result *= num1;
    }
    return result;
}

int main() {
    int z = oneTask(x, y);
    cout << z << endl; // Результат 32
    z = notOneTask();
    cout << z << endl;
    int a = getNum();
    int b = getNum();
    z = calc(a, b);
    cout << z << endl;
    return 0;
}
// Output:
/*
32
Введите 2-а числа
2
5
32
Введите число
2
Введите число
5
32
*/
/*
  * 2=1*2
  * 4=2*2
  * 8=4*2
  * 16=8*2
  * 32=16*2
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//