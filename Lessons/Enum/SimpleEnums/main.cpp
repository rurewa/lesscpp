// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Интерактивное описание каждого дня недели
// weekDays.cpp Enums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include<iostream>
using namespace std;

enum Week { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    puts("Нужно выбрать день");
    int yourDay = 0;
    cin >> yourDay;
    //Week day = static_cast<Week>(yourDay);
    Week day = (Week)(yourDay);
    switch (day)
    {
    case MONDAY:
        puts("Трудный день!");
        break;
    case TUESDAY:
        puts("Боже! Помоги мне пережить этот день!");
        break;
    case WEDNESDAY:
        puts("Среда - не трогайте меня!");
        break;
    case THURSDAY:
        puts("Четверг - жизнь немного налаживается!");
        break;
    case FRIDAY:
        puts("Почти праздник! Вечером можно себе ни в чём не отказывать");
        break;
    case SATURDAY:
        puts("Полдня сплю ... Затем снова развлекаюсь!");
        break;
    case SUNDAY:
        puts("Отдыхаю от развлечений. Стараюсь не думать о завтра...");
        break;
    default:
        puts("Всего 7 суток в неделе!");
        break;
    }
    return 0;
}
//
// Output
/*
Нужно выбрать день
7
Отдыхаю от развлечений. Стараюсь не думать о завтра...
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-