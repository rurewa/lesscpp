// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Ещё простые if-ы
// moreLessChars.cpp /IFELSE
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    puts("Введите слово из 4-х букв");
    string word;
    getline(cin >> ws, word); // >> ws - чтобы обрабатывались Enter-ы
    short countChars = word.length();
    if (countChars < 4) {
        puts("Мало букв!");
        main();
    }
    if (countChars > 4) {
        puts("Много букв!");
        main();
    }
    if (countChars == 4) {
        puts("Ура!");
    }
    return 0;
}
// Output
/*
Введите слово из 4-х букв
123456
Много букв!
Введите слово из 4-х букв
1234
Ура!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//