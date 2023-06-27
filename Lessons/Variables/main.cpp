// vars.cpp
#include <iostream>
using namespace std;

// Имена переменных не должны начинаться с цифры
// Глобальные переменные - это зло!
//long var = 100;

int main() {
    cout << "Область видимости локальных переменных" << endl;
    {
        // Время жизни локальной переменной ограничено фигур.скобками
        long var = 100; // Это хороший вариант. Тут переменная появляется
        cout << var << endl;
        // Тут она уничтожается
    }
    /*
    int var = 3;
    short var = 200; // Одинаковые имена разных переменных. Нельзя так делать!
    cout << var << endl;
    */
    int someVar = 3 + 7;
    cout << someVar << '\t' << " - это значение переменной" << endl;
    int variable = someVar + 3;
    cout << variable << endl;

    return 0;
}
