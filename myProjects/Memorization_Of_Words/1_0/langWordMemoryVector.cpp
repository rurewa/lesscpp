// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Программа для запоминания английских слов. С применением динамических массивов
// V 1.0 beta
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <vector>
using namespace std;

int main() {
    srand(time(0));
    string userInWord; // Для ввода слова от пользователя
    char again = 'y';      // Для продолжения/завершения программы
    vector<string> enWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                              "cost", "come", "choose", "catch"};
    vector<string> ruWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                              "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить"};
    int LENGHT = enWords.size(); // Автоматически вычисляемый размер вектора
    do {
        int randWord = 0 + (rand() % LENGHT);
        cout << "Переведите слово - " << ruWords.at(randWord) << endl;
        getline(cin >> ws, userInWord);
        if (enWords.at(randWord) == userInWord) {
            cout << boolalpha << true << endl;
        }
        else {
            cout << boolalpha << false << endl;
        }
        cout << "Желаете продолжить? (y/n)" << endl;
        cin >> again;
    } while (again == 'y');
    cout << "До свидания!" << endl;
    return 0;
}
// Output:
/*
Переведите слово - означать
let
true
Желаете продолжить? (y/n)
y
Переведите слово - бороться
figt
false
Желаете продолжить? (y/n)
y
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
