// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Тест со стрингами
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    srand(time(0));
    //char again = 'y';
    array <string, 4> words {"word", "glasses", "dog", "wall"};
    cout << "Угадай слово или введи hint для подсказки: ";
    string guess, hint = "Подсказка";
    random_shuffle(words.begin(), words.end());
    string jumbleWords = words.at(0);
    string jumbleSimbols = jumbleWords;
    random_shuffle(jumbleSimbols.begin(), jumbleSimbols.end());
    cout << "Слово " << jumbleSimbols << '\n';
    getline(cin, guess);
    if (guess != jumbleWords && guess != "hint") {
        cout << "Не угадал!" << '\n';
    }
    else if (guess == "hint") {
        cout << hint << '\n';
        for (auto i : words) {
            cout << i << ' ';
        }
        cout << endl;
        cout << "Слово " << jumbleSimbols << '\n';
        getline(cin, guess);
    }
    else {
        cout << "Угадал!" << '\n';
    }
    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
