// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Астромическая викторина
// astro.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <algorithm>
#include <iostream>
using namespace std;

enum Planets { SATURN = 146, JUPITER = 92, EARTH = 1, MARS,  URANUS = 27, NEPTUNE = 14 };

int main() {
    srand(time(0));
    int guess = 0;
    int score = 0;
    int counter = 0;
    char again = 'y';
    int randPlanet = 0;
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int LENGHT = sizeof(arr) / sizeof(*arr);
    random_shuffle(arr, arr + LENGHT);
    while (counter <= LENGHT) {
        for (auto i : arr) {
            randPlanet = arr[i];
            switch (randPlanet) {
            case 0:
                puts("Сколько спутников у Марса");
                cin >> guess;
                if (guess == Planets::MARS) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else {
                    puts("Вы не угадали");
                }
                break;
            case 1:
                puts("Сколько спутников у Юпитера?");
                cin >> guess;
                if (guess == Planets::JUPITER) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else {
                    puts("Вы не угадали");
                }
            case 2:
                puts("Сколько спутников у Земли?");
                cin >> guess;
                if (guess == Planets::EARTH) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else {
                    puts("Вы не угадали");
                }
                break;
            case 3:
                puts("Сколько спутников у Сатурна?");
                cin >> guess;
                if (guess == Planets::SATURN) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else {
                    puts("Вы не угадали");
                }
                break;
            case 4:
                puts("Сколько спутников у Урана?");
                cin >> guess;
                if (guess == Planets::URANUS) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else {
                    puts("Вы не угадали");
                }
                break;
            case 5:
                puts("Сколько спутников у Нептуна");
                cin >> guess;
                if (guess == Planets::NEPTUNE) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else {
                    puts("Вы не угадали");
                }
                break;
            default:
                puts("Нет такой планеты в списке");
                break;
            }
        }
        cout << "Ваш счёт " << score << "\nЖелаете попробовать снова? [y/N]" << endl;
        cin >> again;
        if (again == 'y') {
            counter = 0;
            score = 0;
        } else {
            puts("До свидания!");
            break;
        }
    }
    ++counter;
    return 0;
}
// Output:
/*

*/
/*
План разработки астрономической викторины
Описание проекта
Программа рандомно задаёт вопросы по разным планетам Солнечной
системы и их спутникам, сравнивает ответы с тем, что есть в её
списке и возвращает результат. Ещё эта программа ведёт счёт пра-
вильных ответов и после перечисления всех планет из своего списка
предлагает пользователю начать заново или завершить эту викторину.

Что нужно сделать для реализации этой программы?

1. Сделать уникальный рандом, чтобы вопросы не повторялись в 1-м
цикле.
2. Сделать список планет и количество их спутников

Технические задачи

1. Сделать рандом для сортировки содержимого фиксированного
массива с размером = количеству планет.
2. Сделать цикл, который повторяется столько раз, сколько
планет в списке
3. Вопросы можно сделать с помощью Switch case
4. Правильность ответом с помощью If
5. Для перемешивания можно использовать for
6. Для подсчёта - инкремент
7. Список планет и их спутников сделать в Enum
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
