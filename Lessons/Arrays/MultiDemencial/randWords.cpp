// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Игра "Угадай слово".
// randWord.cpp Arrays/MultiDem
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));
    char again = 'y';
    const int WORD = 0, HINT = 1, NUM_FIELDS = 2, NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS]{
        {"wall", "Тебе не хочется обо что-нибудь удариться головой? "},
        {"glasses", "Это может помочь вам увидеть ответ "},
        {"work", "Продвигается медленно, не так ли? "},
        {"dog", "Лает, кусает, в дом не пускает.. "},
        {"jumble", "Суть игры!"}};
    int choice = (rand() % NUM_WORDS);    // Рандом слов
    string theWord = WORDS[choice][WORD]; // Угадываемое слово
    string theHint = WORDS[choice][HINT]; // Подсказка
    string jumble = theWord;
    // int length = jumble.size();
    /* for (int i = 0; i < length; ++i) { // Перемешиваем слово
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    } */
    random_shuffle(jumble.begin(), jumble.end());
    cout << "\t\t\tДобро пожаловать в игру \"Словомеска\"\n\n";
    cout << "Угадай все буквы, чтобы сложилось слово\n";
    cout << "Введи 'hint' для подсказки \n";
    cout << "Зашифрованное слово " << jumble;
    string guess;
    cout << "\n\nВаше предложение: ";
    getline(cin >> ws, guess);
    // Игровой цикл
    while (guess != theWord) {
        if (guess == "hint") {
            cout << theHint;
        }
        else {
            cout << "\nИзвините, это не то...";
        }
        cout << "\n\nВаше предложение: ";
        getline(cin >> ws, guess);
    }
    if (guess == theWord) {
        cout << "\nВы угадали!" << endl;
    }
    cout << "Желаете продолжить? y/n ";
    cin >> again;
    if (again == 'y') {
        main();
    }
    else {
        cout << "Спасибо за игру!\n";
        exit(0);
    }
    return 0;
}
// Output:
/*
                        Добро пожаловать в игру "Словомеска"

Угадай все буквы, чтобы сложилось слово
Введи 'hint' для подсказки
Зашифрованное слово rowk

Ваше предложение: trre

Извините, это не то...

Ваше предложение: hint
Продвигается медленно, не так ли?

Ваше предложение:
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
