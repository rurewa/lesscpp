// -=-=-=-=-=-=-=- =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Программа для запоминания английских слов. С применением динамических массивов
// V 1.0 beta
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <vector>
using namespace std;

int main() {
    srand(time(0));
    string userInWord; // Для ввода слова от пользователя
    char again = 'y';  // Для продолжения/завершения программы
    vector<vector<string>> enRuWords {{"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                              "cost", "come", "choose", "catch"}, {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                              "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить"}};
    const int LENGHT = enRuWords[0].size(); // Автоматически вычисляемый размер вектора
    do {
        int randWord = 0 + (rand() % LENGHT);
        cout << "Переведите слово - " << enRuWords[1].at(randWord) << endl;
        getline(cin >> ws, userInWord);
        if (enRuWords[0].at(randWord) == userInWord) {
            cout << boolalpha << true << endl;
        }
        else {
            cout << boolalpha << false << endl;
        }
        //cout << boolalpha << ((enWords.at(randWord) == userInWord) ? true : false);
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
 
