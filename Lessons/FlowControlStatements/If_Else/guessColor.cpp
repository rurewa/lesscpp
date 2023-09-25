// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа "Угадай цвет"
// guessColor.cpp IFELSE
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

const auto RED = "\e[41m    \e[0m";
const auto GREEN = "\e[42m    \e[0m";
const auto YELLOW = "\e[43m    \e[0m";
const auto BLUE = "\e[44m    \e[0m";

int main() {
    srand(time(0)); // Инициализация генератора
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    int min = 0, max = 3;
    int secret = (int)(rand() * FRACTION * (max - min + 1) + min);
    static int score = 0, health = 100;
    auto color = "";
    puts("Угадайте цвет: красный 0, зелёный 1, желтый 2, синий 3");
    int guess = 0;
    cin >> ws >> guess;
    if (secret == 0) {
        color = RED;
        health += 100;
    }
    else if (secret == 1) {
        color = GREEN;
        health -= 50;
    }
    else if (secret == 2) {
        color = YELLOW;
        health -= 50;
    }
    else {
        color = BLUE;
        health -= 50;
    }
    if (guess == secret) {
        cout << "Угадал " << color  << " неудачных попыток " << score << " Здоровье "
        << health << endl;
    }
    else {
        cout << "Не угадал " << endl;
        ++score;
        main();
    }
    return 0;
}
// ДЗ. Дописать программу, введя в неё пурпурный, голубой и белый цвет
// Output:
/*
Не угадал
Угадайте цвет: красный 0, зелёный 1, желтый 2, синий 3
3
Угадал      неудачных попыток 3 Здоровье 50
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
