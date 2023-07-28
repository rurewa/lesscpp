// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Правило "одной задачи"
// oneTask.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

// Функция, которая нарушает правило одной задачи
/* int notOneTask() {
    cout << "Введите 2-я числа\n";
    int x = 0, y = 0;
    cin >> x >> y;
    int result = 1, i;
    for (i = 0; i != y; ++i) {
        result *= x;
    }
    return result;
} */

int oneTask(int a, int b) {
    int result = 1, i;
    for (i = 0; i != b; ++i) {
        result *= a;
    }
    return result;
}

int getNum() {
    cout << "Введите число\n";
    int num = 0;
    cin >> ws >> num;
    return num;
}

int main() {
    int z = oneTask(2, 5);
    cout << z << endl;
    int a = getNum();
    int b = getNum();
    z = oneTask(a, b);
    cout << z << endl;
    return 0;
}
// Output
/*
32
Введите число
2
Введите число
5
32
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
