### Lesson
Примеры применения средств диагностики программ на cpp:

1. strace ./твоя-программа.bin (может придётся установить strace в твоей ОС)
2. cppcheck -q --enable=all ./твоя-программа.cpp (может придётся установить cppcheck в твоей ОС)
3. cppcheck -q --enable=all --inconclusive ./твоя-программа.cpp
4. cppcheck -q -j4 --enable=all --suppress=variableScope ./твоя-программа.cpp
5. cppcheck --enable=all --suppress=missingIncludeSystem . main.cpp
6. clang-tidy твоя-программа.cpp -- -Wall -std=c++14 -x c++ (для Ubuntu нужно установить пакет clang-tools-14)
7. valgrind ./stac.bin

### Подробней о clang

[clang - Man Page](https://www.mankier.com/1/clang#Examples_(TL;DR))

### Подробней о cppcheck

[Тонкости анализа исходного кода C/C++ с помощью cppcheck](https://habr.com/ru/articles/210256/)

### Подробней о valgrid

[Использование Valgrind для поиска утечек и недопустимого использования памяти](http://cppstudio.com/post/4348/)

### Грамоты и печати

[Простой редактор дипломов и благодарностей](https://prostograf.ru/redaktor-diplomov-gramot-blagodarnostey)

[Дизайн штампа печати](https://pechati.printut.com/)