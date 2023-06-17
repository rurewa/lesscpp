### Lesson
Есть несколько способой узнать причину сбоя программы:

1. strace ./твоя-программа.bin (может придётся установить strace в твоей ОС)
2. cppcheck -q --enable=all ./твоя-программа.cpp (может придётся установить cppcheck в твоей ОС)
3. cppcheck -q --enable=all --inconclusive ./твоя-программа.cpp
4. cppcheck -q -j4 --enable=all --suppress=variableScope ./твоя-программа.cpp
5. clang-tidy твоя-программа.cpp -- -Wall -std=c++14 -x c++ (для Ubuntu нужно установить пакет clang-tools-14)
