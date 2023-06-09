// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Строки в C++
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    char mystring[] = "String"; // C-style способю Его нежелательно использовать!
    cout << mystring << " Содержит " << sizeof(mystring) << endl;
    cout << mystring << " Содержит " << strlen(mystring) << endl;
    // 7, потому, что автоматически вставляется 0-терминатор для конца строки
    cout << "ADCII-код каждого элемента строки: ";
    for (unsigned index = 0; index < (sizeof(mystring)); ++index){
        cout << (int)(mystring[index]) << ' ';
    }
    cout << endl;
    cout << "Изменить элемент строки\n";
    mystring[1] = 'v';
    cout << mystring << endl;
    cout << "Строки с помощью класса String\n";
    string str = "seva";
    string more = str;
    cout <<"Количество элементов в строке: " << more << " = " << more.length() << endl;
    random_shuffle(more.begin(), more.end());
    cout << "Наоборот: " << more << endl;
    cout << "Сложение строк\n";
    string firstName, lastName;
    cout << "Введите ваше имя: ";
    getline(cin, firstName);
    cout << "Введите вашу фамилию: ";
    getline(cin, lastName);
    string con = firstName + lastName;
    cout << con << '\n';
    lastName[0] = 'F';
    cout << "Результат замены 0-го индекса в строке lastName: " << lastName << '\n';
    cout << "Сравним строки\n";
    cout << "Введите 1-е слово: ";
    string firstWord;
    getline(cin, firstWord);
    cout << "Ведите 2-е слово: ";
    string secondWord;
    getline(cin, secondWord);
    if (firstWord != secondWord) {
        cout << "Слова разные!\n";
    }
    else {
        cout << "Одинаковые слова\n";
    }
    cout << boolalpha;
    bool result = (firstWord == secondWord) ? true : false;
    cout << "Это одинаковые слова? " << result << '\n';
    cout << "Со строками нельзя производить арифметические действия\n";
    string num1 = "35";
    string num2 = "20";
    cout << num1 + num2 << endl;
    string arr[] {" to ", " be ", " or ", " not "};
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[0] << arr[1] << endl;
    for (auto i : arr) {
        cout << i;
    }
    for (int i = 0; i < 2; ++i) {
        cout << arr[i];
    }
    cout << endl;
    cout << "Переставляем слова в строковом масиве\n";
    swap(arr[0], arr[1]);
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    cout << "Перебор индексов фразы:\n";
    string phrase = "I learn English online";
    for (int i = 0; i < phrase.length(); ++i) {
        cout << i << ' ';
    }
    cout << endl;
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    cout << "Перемешиваем слова во фразе\n";
    srand(time(0));
    const int LENGHT = sizeof(arr) / sizeof(*arr);
    std::random_shuffle(arr, arr + LENGHT);
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    cout << "Поиск индексов строки:\n";
    cout << phrase.find("I") << endl;
    cout << phrase.find("learn") << endl;
    cout << phrase.find("English") << endl;
    cout << phrase.find("online") << endl;
    cout << endl;
    cout << "Поиск подстроки во фразе:\n";
    if (phrase.find("not") == string::npos) {
        cout << "Не найдено!\n";
    }
    else {
        cout << "Есть такая подстрока!\n";
    }
    cout << "Удаляем слово во фразе\n";
    phrase.erase(2, 5); // индекс и количество символов в слове
    cout << phrase << endl;
    cout << "Удаляем все слова во фразе\n";
    phrase.erase();
    cout << phrase << endl;
    cout << "Проверяем строку на содержимое - пусто/не пусто\n";
    if (phrase.empty()) {
        cout << "Строка пустая!\n";
    }
    else {
        cout << "Строка не пустая!\n";
    }

    return 0;
}
// Output
/*

*/
