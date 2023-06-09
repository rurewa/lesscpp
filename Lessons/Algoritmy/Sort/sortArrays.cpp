// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Начало занятий по строкам. Примеры C-style с продолжением на String
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char mystring[] = "String"; // C-style способ инициализации строки
    cout << mystring << " содержит: " << sizeof(mystring) << endl;
    // 7, потому, что автоматически добавляется 0-терминатор для обозначения конца строки
    cout << "ASCII код каждого элеманта строки: ";
    for (unsigned index = 0; index < (sizeof(mystring)); ++index) {
        cout << static_cast<int>(mystring[index]) << " ";
    }
    cout << endl;
    cout << "Изменить элемент строки\n";
    mystring[1] = 'P';
    cout << mystring << endl;
    cout << "Строки с помощью класса string\n";
    string str = "Seva";
    string more = str; // Работаем как с обычными переменными
    cout << " Количество символов с троке: " << more << " = " << more.length() << endl;
    cout << "Сложение строк\n";
    string firstName, lastName;
    cout << "Введите ваше имя: ";
    getline(cin, firstName);
    cout << "Введите вашу фамилию: ";
    getline(cin, lastName);
    string con = firstName + lastName;
    cout << con << endl;
    cout << "Сравним слова\n";
    cout << "Введите 1-е слово: ";
    string firstWord;
    getline(cin, firstWord);
    cout << "Введите 2-е слово: ";
    string secondWord;
    getline(cin, secondWord);
    if (firstWord != secondWord) {
        cout << "Слова разные!\n";
    }
    else {
        cout << "Слова одинаковые!\n";
    }
    cout<< boolalpha;
    bool result = (firstWord == secondWord) ? true : false;
    cout << "Это одинаковые слова? " << result << '\n';
    // Со строками нельзя выполнять арифметические выражения
    string num1 = "35";
    string num2 = "20";
    cout << num1 + num2 << endl;
    string h = "Hello, ", w = "World!";
    cout << h + w << '\n';
    string arr[] {" to ", " be ", " or ", " not "};
    // to be or not to be
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[0] << arr[1] << endl;
    for (auto i : arr) {
        cout << i;
    }
    for (int i = 0; i < 2; ++i) {
        cout << arr[i];
    }
    cout << endl;
    cout << "Переставляем слова в строковом массиве\n";
    swap(arr[0], arr[1]);
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    swap(arr[2], arr[3]);
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    cout << "Перемешиваем слова в строковом массиве\n";
    srand(time(0));
    int LENGHT = more.length();
    std::random_shuffle(arr, arr + LENGHT);
    for (auto i : arr) {
        cout << i;
    }
    cout << endl;
    return 0;
}
/* Output:
String содержит: 7
ASCII код каждого элеманта строки: 83 116 114 105 110 103 0
Изменить элемент строки
SPring
Строки с помощью класса string
Seva
Сложение строк
Введите ваше имя: 456
Введите вашу фамилию: 456
456456
Сравним слова
Введите 1-е слово: 654
Введите 2-е слово: 654
Слова одинаковые!
3520
Hello, World!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
