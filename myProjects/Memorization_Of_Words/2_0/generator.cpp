// Генерация случайного числа
#include <cstdlib> // Библиотека таймера
#include <ctime>   // Преобразование времени в строку

int randNums(int lenRand) {
    srand(time(0));
    return 0 + (rand() % lenRand);
}