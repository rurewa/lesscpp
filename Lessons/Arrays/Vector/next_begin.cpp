// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Контейнеры типа Vector. Продолжение
// nextVector.cpp Arrays/Vector
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> intvec;
    cout << "Вектор натуральных чисел\n";
    cout << "Введите любое натуральное число\n";
    int anyNum = 0;
    for (int i = 0; i != 3; ++i) {
        cin >> anyNum;
        intvec.push_back(anyNum);
    }
    cout << "Получившийся вектор\n";
    for (auto i : intvec) {
        cout << i << ' ';
    }
    /* cin.clear(); // Очищаем буфер cin
    cin.ignore(32767, '\n'); // Максимальный лимит типа short + */
    // + удаляем символ новой строки
    cout << endl;
    cout << "Вектор строк\n";
    vector<string> str;
    string anystr;
    for (int i = 0; i != 3; ++i) {
        cout << "Введите любую строку\n";
        getline(cin >> ws, anystr);
        str.push_back(anystr);
    }
    cout << "Получить содержимое вектора по-старому\n";
    cout << str.at(0) << ' ' << str.at(1) << ' ' << str.at(2) << endl;
    cout << "Получить содержимое вектора по-новому\n";
    for (auto i : str) { cout << i << ' '; }
    cout << endl;
    cout << "Размер вектора str: " << str.size() << endl;
    cout << "Количество символов 1-го элемента вектора: " << str.at(2).size() << '\n';
    cout << "Получить 1-й и последний элементы вектора\n";
    if (str.empty()) { // Проверяем вектор
        cout << "Вектор пуст!\n";
    }
    else { // Если вектор не пуст, то выполняем задание
        cout << "1-й элемент вектора: "        << str.front()
             << " последний элемент вектора: " << str.back() << endl;
    }
    cout << "То же самое, только если в векторе всего 1 элемент\n";
    str.erase(str.begin() + 1, str.end()); // Удалим все, кроме 1-го
    for (auto i : str) { cout << i << ' '; }
    cout << endl;
    if (str.empty()) {
        cout << "Вектор пуст!\n";
    }
    else {
        cout << "1-й элемент вектора: "
             << str.front() << " последний элемент вектора "
             << str.back() << endl;
    }
    cout << "Дни недели с порядковой нумерацией\n";
    vector<string> days {"Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday", "Sunday"};
    cout << "Размер вектора: " << days.size() << endl;
    // Сопоставить по дням
    str.clear(); // Очищаем вектор str перед новым использованием
    string day = "_day";
    char num = 48;
    for (int i = 0; i != 7; ++i) {
        str.push_back(++num + day); // Вставляем слово
        cout << str.at(i) << ' '; // Выводим на экран
    }
    cout << endl;
    for (int i = 0; i != str.size(); cout << endl, ++i) {
        cout << str.at(i) << " = " << days.at(i) << ' ';
    }
    cout << "Тоже самое, но по-другому\n";
    vector<string> week = days;
    for (auto i : week) {
        cout << i << ' ';
    }
    cout << endl;
    str.clear();
    num = 48;
    const string DAYS = "_day = ";
    for (int i = 0; i != DAYS.size(); ++i) {
        str.push_back(++num + DAYS + week.at(i));
        cout << str.at(i) << '\n';
    }
    cout << "Объединить 2-а вектора\n";
    vector<int> a {0, 1, 2, 3, 4};
    vector<int> b {5, 6, 7, 8, 9};
    a.insert(end(a), begin(b), end(b));
    for (auto i : a) { cout << i << ' '; }
    cout << endl;
    cout << "Заполнение вектора одинаковыми значениями\n";
    vector<string> sameWords (4, "word");
    for (auto i : sameWords) { cout << i << ' '; }
    cout << endl;
    cout << "Копирование вектора в вектор\n";
    vector<string> newSameWords = sameWords;
    cout << "Многомерный вектор\n";
    vector<vector<int>> matrix {{0, 1, 3, 4}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    for (auto row : matrix) {
        for (auto col : cout << endl, row) {
            cout << col << ' ';
        }
    }
    cout << endl;
    cout << "Ещё многомерный вектор\n";
    vector<vector<int>> multiVector {{1, 2, 3, 4}, {5, 6, 7, 8}};
    cout << multiVector[1].at(3) << endl; // 1 - вектор рядов, 3 - вектор элементов
    cout << "Размер многомерного вектора: " << multiVector[0].size() << endl;
    cout << "Перемешивание содержимого вектора\n";
    srand(time(0));
    vector<int> _nums {1, 2, 3, 4, 5};
    random_shuffle(_nums.begin(), _nums.end());
    for (auto i : _nums) { cout << i << ' '; } cout << endl;
    cout << "Сортировка по возрастанию\n";
    sort(_nums.begin(), _nums.end());
    for (auto i : _nums) { cout << i << ' '; } cout << endl;
    cout << "Сортировка по убыванию\n";
    sort(_nums.rbegin(), _nums.rend());
    for (auto i : _nums) { cout << i << ' '; } cout << endl;
    return 0;
}
// Output:
/*
Вектор натуральных чисел
Введите любое натуральное число
3
6
7
Получившийся вектор
3 6 7
Вектор строк
Введите любую строку
i
Введите любую строку
am
Введите любую строку
a programmer
Получить содержимое вектора по-старому
i am a programmer
Получить содержимое вектора по-новому
i am a programmer
Размер вектора str: 3
Количество символов 1-го элемента вектора: 12
Получить 1-й и последний элементы вектора
1-й элемент вектора: i последний элемент вектора: a programmer
То же самое, только если в векторе всего 1 элемент
i
1-й элемент вектора: i последний элемент вектора i
Дни недели с порядковой нумерацией
Размер вектора: 7
1_day 2_day 3_day 4_day 5_day 6_day 7_day
1_day = Monday
2_day = Tuesday
3_day = Wednesday
4_day = Thursday
5_day = Friday
6_day = Saturday
7_day = Sunday
Тоже самое, но по-другому
Monday Tuesday Wednesday Thursday Friday Saturday Sunday
1_day = Monday
2_day = Tuesday
3_day = Wednesday
4_day = Thursday
5_day = Friday
6_day = Saturday
7_day = Sunday
Объединить 2-а вектора
0 1 2 3 4 5 6 7 8 9
Заполнение вектора одинаковыми значениями
word word word word
Копирование вектора в вектор
Многомерный вектор

0 1 3 4
4 5 6 7
8 9 10 11
Ещё многомерный вектор
8
Размер многомерного вектора: 4
Перемешивание содержимого вектора
5 4 1 3 2
Сортировка по возрастанию
1 2 3 4 5
Сортировка по убыванию
5 4 3 2 1
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
