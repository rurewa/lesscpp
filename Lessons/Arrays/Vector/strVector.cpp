// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Пример итерации по вектору
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /* cout << "Вектор строк\n";
    vector<string> str;
    string anystr;
    for (int i = 0; i != 3; ++i) {
        cout << "Введите любую строку\n";
        getline(cin, anystr);
        str.push_back(anystr);
    }
    for (auto i : str) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "Длина вектора: " << str.size() << endl; */
    /* vector<string> days;
    string day = "_day";
    char num = 48; */
    // days.push_back(day);
    /* days.push_back(day);
    days.push_back(day); */
    /* cout << ++num + days.at(0) << endl;
    cout << ++num + days.at(0) << endl;
    cout << ++num + days.at(0) << endl; */
    /* cout << (num++)+word << endl; // Это работает!
    cout << (num++)+word << endl;
    cout << (num++)+word << endl; */
    /* for (int i = 0; i != 7; ++i) {
        days.push_back(day);
        cout << ++num+days.at(i) << endl;
    } */
    /* vector<int> a = {0, 1, 2, 3, 4};
    vector<int> b = {5, 6, 7, 8, 9};
    a.insert(end(a), begin(b), end(b));
    for (auto i : a) {
        cout << i << ' ';
    }
    cout << endl; */
    /* vector<string> monoWords (4, "word");
    for (auto i : monoWords) {
        cout << i << ' ';
    }
    cout << endl; */
    /* vector<vector<int>> matrix = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    for (auto row : matrix) {
        for (auto col : cout << endl, row) {
            cout << col << ' ';
        }
    }
    cout << endl; */
    srand(time(0));
    vector<int> nums {1, 2, 3, 4, 5};
    random_shuffle(nums.begin(), nums.end());
    for (auto i : nums) { cout << i << ' '; } cout << endl;
    cout << "Сортировка содержимого вектора по возрастанию\n";
    sort(nums.begin(), nums.end());
    for (auto i : nums) { cout << i << ' '; } cout << endl;
    cout << "Сортировка содержимого вектора по убыванию\n";
    sort(nums.rbegin(), nums.rend());
    for (auto i : nums) { cout << i << ' '; } cout << endl;
    return 0;
}
// Output
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //