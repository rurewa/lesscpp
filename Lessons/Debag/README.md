## Дебагинг программ

### Диагностика

Примеры применения средств диагностики программ на cpp:

1. strace ./твоя-программа.bin (может придётся установить strace в твоей ОС)
1. cppcheck -q --enable=all ./твоя-программа.cpp (может придётся установить cppcheck в твоей ОС)
1. cppcheck -q --enable=all --inconclusive ./твоя-программа.cpp
1. cppcheck -q -j4 --enable=all --suppress=variableScope ./твоя-программа.cpp
1. cppcheck --enable=all --suppress=missingIncludeSystem . main.cpp
1. clang-tidy твоя-программа.cpp -- -Wall -std=c++14 -x c++ (для Ubuntu нужно установить пакет clang-tools-14). Эта команда реально хорошо работает!
1. valgrind --leak-check=full ./main.bin
1. valgrind ./stac.bin
1. valgrind --track-origins=yes ./trash.bin (Показать, откуда беруться неинициализированные значения)
1. valgrind -s ./trash.bin (Для получения списка обнаруженных ошибок)

[Использование Valgrind для поиска утечек и недопустимого использования памяти](http://cppstudio.com/post/4348/)

### Дебагинг

[Как пользоваться gdb](https://losst.pro/kak-polzovatsya-gdb)

[Справка по gdb на английском](https://github.com/gnebbia/gdb_tutorial)

[Ещё](https://freecoder.dev/debug-c-program-using-gdb/)

### Подробней о clang

[clang - Man Page](https://www.mankier.com/1/clang#Examples_(TL;DR))

### Подробней о cppcheck

[Тонкости анализа исходного кода C/C++ с помощью cppcheck](https://habr.com/ru/articles/210256/)

### Подробней о valgrid

[Использование Valgrind для поиска утечек и недопустимого использования памяти](http://cppstudio.com/post/4348/)

### Онлайн-курсы по программированию

[От Яндекса](https://education.yandex.ru/handbook/cpp/article/branches-and-loops)

### Интересные статьи

[Операторы](https://pvoid.pro/index.php/cpp-tutorial-menu/cpp-tutorial-menu-operators#:~:text=Оператор%20!%20-%20это%20оператор,%3D%3D%205)%20будет%20true%20!)

[Переполнение стека](https://ru.wikipedia.org/wiki/Переполнение_стека)

[Типы struct, union и enum в Modern C++](https://habr.com/ru/articles/334988/)

### Визуализатор кода для разных языков

[Visualized with pythontutor.com](https://pythontutor.com/cpp.html#mode=edit)

### Видео

[Тематические видео материалы](https://gitflic.ru/project/rurewa/cpp/blob?file=content%2Fvideo.md&branch=master)

### Грамоты и печати

[Простой редактор дипломов и благодарностей](https://prostograf.ru/redaktor-diplomov-gramot-blagodarnostey)

[Дизайн штампа печати](https://pechati.printut.com/)