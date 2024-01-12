// Пре и пост инкремент
// postPreIncrement.cpp
#include <iostream>
using namespace std;

/*
Есть два вида инкремента - постфисктный (i++) и префикстный (++i).
В постфикстном инкременте производится дополнительная операция
сохранения предыдущего состояния переменной, а затем увеличение на 1
В префикстном, после инкрементирования значения переменной сразу
возвращается ссылка на неё.
Префикстные инкременты работают быстрей.
*/

int main() {
    int num1 = 2000, num2 = 2000;
    ++num1; // Префикстный инкремент
    num2++; // Постфикстный инкремент
    ++num1;
    num2++;
    ++num1;
    num2++;
    cout << "Результат пре и пост инкремента";
    cout << "++num1 " << " num++" << endl;
    cout << num1 << '\t' << num2 << endl;
    puts("Результат пре и пост инкремента с присваиванием");
    num1 = 2000;
    num2 = 2000;
    num2 = ++num1;
    num1 = num2++;
    num2 = ++num1;
    num1 = num2++;
    num2 = ++num1;
    num1 = num2++;
    cout << num1 << '\t' << num2 << endl;
    return 0;
}
