// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// weekEnum.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

enum Week { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    cout << "Нужно выбрать день недели\n";
    int yourDay = 0;
    cin >> ws >> yourDay;
    Week day = static_cast<Week>(yourDay);
    switch (day)
    {
    case MONDAY:
        cout << "Трудный день!\n";
        break;
    case TUESDAY:
        cout << "Боже! Помоги мне пережить этот день!\n";
        break;
    case WEDNESDAY:
        cout << "Среда - не трогайте меня!\n";
        break;
    case THURSDAY:
        cout << "Четверг - жизнь немного немного возраждается.\n";
        break;
    case FRIDAY:
        cout << "Почти праздник! Вечером можно ни в чём себе не отказывать...\n";
        break;
    case SATURDAY:
        cout << "Полдня спим... Потом снова развлекаемся\n";
        break;
    case SUNDAY:
        cout << "Отдыхаю от развлечений. Стараюсь не думать о завтра...\n";
        break;
    default:
        cout << "Всего 7 суток!\n";
        break;
    }
    return 0;
}
/* Output:
Нужно выбрать день недели
7
Отдыхаю от развлечений. Стараюсь не думать о завтра...
*/
// Задание
/* Сделать тоже самое, но с switch case */
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
