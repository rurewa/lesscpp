#include <iostream>

int userChooseGame() {
    int userChoose{}; // Выбор игры
    std::cin >> userChoose;
    std::cin.ignore(32767, '\n'); // Для удаления символа новой строки из входящего потока
    return userChoose;
}