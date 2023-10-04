// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа "Угадай цвет!"
// guessColor.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

const auto RED    = "\e[41m    \e[0m";
const auto GREEN  = "\e[42m    \e[0m";
const auto YELLOW = "\e[43m    \e[0m";
const auto BLUE   = "\e[44m    \e[0m";

int main() {
    srand(time(0));
    const double FRACTION = 1.0 / ((double)(RAND_MAX) + 1.0);
    int min = 0, max = 3;
    int secret = (int)(rand() * FRACTION * (max - min + 1) + min);
    static int score = 0, health = 100;
    auto color = "";
    int guess = 0;
    puts("Угадайте цвет: красный 0, зелёный 1, желтый - 2, синий 3");
    cin >> ws >> guess;
    if (secret == 0) {
        color = RED;
    }
    else if (secret == 1) {
        color = GREEN;
    }
    else if (secret == 2) {
        color = YELLOW;
    }
    else {
        color = BLUE;
    }
    if (guess == secret) {
        health += 100; // health = health + 100
        cout << "Угадал " << color << " неудачных попыток "
             << score << " Здоровье " << health << endl;
    }
    else {
        puts("He угадал");
        health -= 50;
        cout << "Текущее здоровье: " << health << '\n';
        ++score;
        main();
    }
    return 0;
}
// Д.З.
// Обратный отчёт
// Output:
/*
He угадал
Угадайте цвет: красный 0, зелёный 1, желтый - 2, синий 3
3
He угадал
Угадайте цвет: красный 0, зелёный 1, желтый - 2, синий 3
3
Угадал      неудачных попыток 3 Здоровье 200
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
