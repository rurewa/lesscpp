// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Примеры использования управляющих символов
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
     cout << "Управляющие символы" << endl;
     cout << "Новая строка: " << "first line\n Second Line" << endl;
     cout << "Звуковой сигнал:" << "firstline\a Second Line" << endl; // Можно вместо а использовать 7
     sleep(1);
     cout << "Звуковой сигнал: " << "firstline\a Second Line" << endl;
     sleep(1);
     cout << "Звуковой сигнал: " << "firstline\a Second Line" << endl;
     cout << "firstline\vSecond Line" << endl; // Вставка вертикального TAB-а
     cout << "firstline\tSecond Line" << endl; // Вставка горизонтального TAB-а
     cout << "\n" << endl;
     cout << "firstline\r Second Line" << endl; // Перемещение курсора в начало строки
     cout << "Вставка одинарной кавычки или апострофа: " << "firstline\'Second Line\'" << endl;
     cout << "Вставка двойной кавычки: " << "firstline\"Second Line\"" << endl;
     cout << "Вставка обратной косой черты (бэкслэша): " << "firstline\\Second Line\\" << endl;
     cout << "Вставка знака вопроса: " << "firstline\tSecond Line\?" << endl;
     cout << "Перевод числа из восьмеричной системы счисления в тип char: " << "\x6F" << endl;

     return 0;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
