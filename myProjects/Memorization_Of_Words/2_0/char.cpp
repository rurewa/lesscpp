#include<iostream>
// Эта функция позволит избавиться от повторяющихся строк
char again(char again) {
    std::cout << "Do you want to play again? (y/n)" << std::endl;
    std::cin >> again;
    return again;
}