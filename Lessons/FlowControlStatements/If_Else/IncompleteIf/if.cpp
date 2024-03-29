// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Ещё примеры с неполной развилкой
// if.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    const string GUESS_NAME = "Alex", HINT = "xelA";
    cout << "\e[36;42mУгадайте моё имя\e[0m\n";
    cout << "Нужна подсказка? [y/n]\n";
    char yesNo;
    cin >> ws >> yesNo;
    if (yesNo == 'y') {
        cout << HINT << endl;
    }
    cout << "Ваш вариант\n";
    string guess;
    getline(cin >> ws, guess);
    if (guess == GUESS_NAME) {
        cout << "Ура! Вы угадали!\n";
        exit(0); // Принудительное завершение программы
    }
    cout << "Увы, не угадали!\n";
    return 0;
}
// Output
/*
Угадайте моё имя
Нужна подсказка? [y/n]
y
xelA
Ваш вариант
Alex
Ура! Вы угадали!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//