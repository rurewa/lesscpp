// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Программа-шифровальщик по ключу Цезаря
// CesarEncryption.cpp Array/String
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;
/*
Код Цезаря представляет собой способ шифрования текстов, основанный на простом
правиле: при шифровке каждая буква меняется таким образом, что номер
получившейся буквы в алфавите есть номер исходной буквы в алфавите плюс
сдвиг. При этом алфавит "закольцовывался" - считается, что за последней
буквой алфавита идет первая, за первой, естественно, вторая. Например,
при сдвиге 2 для русского алфавита имеем: "а" меняется на "в", "б" на "г",
"в" на "д", "г" на "е",... "э" на "я", "ю" на "а", "я" на "б".
*/
int main() {
    string word, code, decode;
    int shift = 0; // Величина сдвига
    puts("Введите ключ от 3-х до 7-и");
    cin >> shift;
    puts("Введите сообщение");
    getline(cin >> ws, word);
    for (int i = 0; i < word.size(); ++i) {
        code += (word[i] - 'a' + shift) % 127 + 'a';
    }
    cout << "\nЗашифрованное сообщение:  " << code << '\n';
    for (int i = 0; i < word.size(); ++i) {
        decode += (code[i] - 'a' - shift) % 127 + 'a';
    }
    cout << "\nРашифрованное сообщение:  " << decode << '\n';
    return 0;
}
// Д.З. Дописать эту программу, сделав дешифратор слова
// Output:
/*
Введите сообщение
root

Зашифрованное сообщение:  |yy~

Рашифрованное сообщение:  root
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//