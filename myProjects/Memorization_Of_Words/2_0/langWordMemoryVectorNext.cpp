// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа для запоминания английских слов. С применением динамических массивов
// V 2.5 beta refactoring
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <string>
#include <vector>
#include "function.h" // Функции

int main()
{
    using namespace std;
    vector<string> enIrregularVerbsWords = {"meet", "let", "ride", "hold", "hear", "have", "grow", "give", "get", "fight", "fall",
                                            "cost", "come", "choose", "catch", "bring", "blow", "wear", "wake", "until", "everyone!"};
    vector<string> ruIrregularVerbsWords = {"встречаться", "означать", "кататься", "держать", "слышать", "иметь", "расти", "давать",
                                            "получать", "бороться", "падать", "строить", "придти", "выбирать", "ловить", "приносить",
                                            "дуть", "носить", "будить", "до тех пор", "каждый"};
    vector<string> ruQuestionsWord = {"что", "почему", "где", "как", "когда", "чей"};
    vector<string> enQuestionsWord = {"what", "why", "where", "how", "when", "whose"};
    vector<string> enProgrammicWorlds = {"issue", "exception", "above", "below", "under", "define", "include"};
    vector<string> ruProgrammicWorlds = {"вопрос", "исключение", "выше", "ниже", "под", "определять", "содержит"};
    menuGame(); // Меню
    string userInWord; // Для ввода слова от пользователя
    char again{'y'}; // Для продолжения/завершения программы
    switch (userChooseGame()) {
    case 1:
        do {
            int arrEnIrregularVerbsWordsSize = enIrregularVerbsWords.size(); // Определяем кол-во элементов массива
            int numArray = randNums(arrEnIrregularVerbsWordsSize);
            cout << "Translate the word - " << ruIrregularVerbsWords[numArray] << endl;
            cin >> userInWord;
            if (enIrregularVerbsWords[numArray] == userInWord) {
                cout << "True!" << endl;
            }
            else {
                cout << "False!" << endl;
            }
            cout << "Do you want to play again? (y/n)" << endl;
            cin >> again;
        } while (again == 'y');
        break;
    case 2:
        do {
            int arrEnQuestionsWordSize = enQuestionsWord.size();
            int numArray = randNums(arrEnQuestionsWordSize);
            cout << "Translate the word - " << ruQuestionsWord[numArray] << endl;
            cin >> userInWord;
            if (enQuestionsWord[numArray] == userInWord) {
                cout << "True!" << endl;
            }
            else {
                cout << "False!" << endl;
            }
            cout << "Do you want to play again? (y/n)" << endl;
            cin >> again;
        } while (again == 'y');
        break;
    case 3:
       do {
            int arrEnProgrammicWorldsSize = enProgrammicWorlds.size();
            int numArray = randNums(arrEnProgrammicWorldsSize);
            cout << "Translate the word - " << ruProgrammicWorlds[numArray] << endl;
            cin >> userInWord;
            if (enProgrammicWorlds[numArray] == userInWord) {
                cout << "True!" << endl;
            }
            else {
                cout << "False!" << endl;
            }
            cout << "Do you want to play again? (y/n)" << endl;
            cin >> again;
        } while (again == 'y');
       break;
    case 4:
       cout << "Goodbye!" << endl;
       return 0;
       break;
    default:
        return main();
        break;
    }
    cout << "Do you want main menu? (y/n)" << endl;
    char mainMenu;
    cin >> mainMenu;
    if (mainMenu == 'y') {
        return main();
    }
    else {
      cout << "Goodbye!" << endl;
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //