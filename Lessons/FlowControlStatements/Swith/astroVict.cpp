// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа-викторина по астрономии
// astro.cpp Switch
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
using namespace std;

enum Planets { SATURN = 146, JUPITER = 92, EARTH = 1, MARS, URANUS = 27, NEPTUNE = 14 };

int main() {
    srand(time(0));
    int guess = 0;
    int score = 0;
    int counter = 0;
    char again = 'y';
    int randPlanet = 0;
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int LENGHT = sizeof(arr) / sizeof(*arr);
    random_shuffle(arr, arr + 6);
    while (counter <= LENGHT) {
        for (auto i : arr) {
            randPlanet = arr[i];
            switch (randPlanet) {
            case 0:
                puts("Сколько спутников у Марса?");
                cin >> guess;
                if (guess == Planets::MARS) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else { puts("Вы не угадали"); }
                break;
            case 1:
                puts("Сколько спутников у Юпитера?");
                cin >> guess;
                if (guess == Planets::JUPITER) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else { puts("Вы не угадали"); }
                break;
            case 2:
                puts("Сколько спутников у Земли?");
                cin >> guess;
                if (guess == Planets::EARTH) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else { puts("Вы не угадали"); }
                break;
            case 3:
                puts("Сколько спутников у Сатурна?");
                cin >> guess;
                if (guess == Planets::SATURN) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else { puts("Вы не угадали"); }
                break;
            case 4:
                puts("Сколько спутников у Урана");
                cin >> guess;
                if (guess == Planets::URANUS) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else { puts("Вы не угадали"); }
                break;
            case 5:
                puts("Сколько спутников у Нептуна");
                cin >> guess;
                if (guess == Planets::NEPTUNE) {
                    puts("Поздравляю, вы угадали!");
                    ++score;
                } else { puts("Вы не угадали"); }
                break;
            default:
                puts("Нет такой планеты!");
                break;
            }
        }
        cout << "Ваш счёт " << score << "\nЖелаете попробовать снова?" << endl;
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
// Д.З.
/* Output:
14
Поздравляю, вы угадали!
Сколько спутников у Урана
27
Поздравляю, вы угадали!
Сколько спутников у Марса?
2
Поздравляю, вы угадали!
Ваш счёт 5
Желаете попробовать снова?
n
До свидания
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//