// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Программа-пример использования управляющих символов в тексте
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <unistd.h>
#include <iomanip>

using namespace std;

int main() {
    cout << "\tАлександр Блок написал свои первые стихи еще до гимназии."
         << "14 лет он издавал рукописный журнал \"Вестник,\"\n"
         << "в 17 — ставил пьесы на сцене домашнего театра и играл в них, в 22 — опубликовал свои стихотворения"
         << "в альманахе Валерия Брюсова «Северные цветы».\n\n";
    cout << "Ночь, улица, фонарь, аптека,\vБессмысленный и тусклый свет.\n";
    cout << "Живи еще хоть четверть века —\vВсё будет так. Исхода нет.\n\n";
    cout << "Ночь, улица, фонарь, аптека,\tУмрешь — начнешь опять сначала\n";
    cout << "Бессмысленный и тусклый свет.\tИ повторится всё, как встарь:\n";
    cout << "Живи еще хоть четверть века —\tНочь, ледяная рябь канала,\n";
    cout << "Всё будет так. Исхода нет.\tАптека, улица, фонарь.";
    cout << " " << endl;
    return 0;
}
// Output
/*
    Александр Блок написал свои первые стихи еще до гимназии.14 лет он издавал рукописный журнал "Вестник,"
в 17 — ставил пьесы на сцене домашнего театра и играл в них, в 22 — опубликовал свои стихотворенияв альманахе Валерия Брюсова «Северные цветы».

Ночь, улица, фонарь, аптека,
                            Бессмысленный и тусклый свет.
Живи еще хоть четверть века —
                             Всё будет так. Исхода нет.

Ночь, улица, фонарь, аптека,    Умрешь — начнешь опять сначала
Бессмысленный и тусклый свет.   И повторится всё, как встарь:
Живи еще хоть четверть века —   Ночь, ледяная рябь канала,
Всё будет так. Исхода нет.  Аптека, улица, фонарь.
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
