#include <iostream> // include - подключение
// iostream - стандартная библиотека
using namespace std; // Пространство имён

/* Переменные бывают глобальные и локальные */
// Глобальные переменные
// Целые числа
/* Short, Int, Long, float, double, char, string */
short sh = -10; // short - это тип, sh - произвольное имя
// = оператор присваивания
// short -32'768 до 32'767
unsigned short ush = 2; // Unsigned - беззнаковый
int in = 100; // Целое, вмещает -2'147'483'648 до 2'147'483'647
unsigned int uin = 5;
long lg = 2000; // Вмещает -9'223'372'036'854'775'808 до 9'223'372'036'854'775'807
unsigned long ulg = 5000;
// Вещественные числа
float fl = 1.22; // Маленькая точность
double db = 33.454; // Максимальная точность
// Символы и строки
char ch = 'a';
string str = "Word";

int main() { // Главная функция
    cout << "Что-то\n";
    cout << sizeof(short) << " байта " << sh << ' ' << ush << '\n';
    cout << sizeof(int) << " байта " << in << '\n' << uin << '\n';
    cout << "Фразы" << ' ' << 'c' << '\n';
    cout << sizeof(long) << " байта "<< lg << ' ' << ulg << '\n';
    cout << sizeof(float) << " байта " << fl << ' ' << sizeof(double)
         << " байта " << db << '\n';
    cout << (int)ch << '\n';
    cout << sizeof(char) << " байта " << (char)(ch + 3) << '\n';
    cout << str << '\n';
    return 0; // Возвращает значение в ОС
}