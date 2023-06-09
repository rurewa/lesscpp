#include<iostream>
#include<unistd.h>

using namespace std;
// Область глобальной видимости переменных
const short VAR = 5; // Глобальная переменная

int main() {
    int VAR = 6; // Фича C++!!! Так не надо делать!
    {
        int a = 0;
        {
            int a = 10; // Не делайте так Никогда!
            cout << "a:\t" << a << '\n';
            // Переменная a уничтожается тут!
        }
        cout << "a:\t" << a << '\n';
    }
    {
        // Появление новой переменной
        int bol = 12;
        cout << "bol:\t" << bol << '\n';
        // Уничтожение переменной bol
        {
            cout << "bol_2:\t" << bol << '\n';
            // Уничтожение переменной bol
        }
    }
    sleep(1);
    cout << "var:\t" << VAR << '\n';
    return 0;
}