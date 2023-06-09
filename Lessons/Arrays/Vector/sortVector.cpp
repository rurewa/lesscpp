// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Сортировка символьного и строкового векторов
// sortVector.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Объявление! vector bool лучше не использовать!

int main() {
    cout << "Сортировка символьного вектора\n";
    vector<char> myChar {'a', 'b', 'c', 'd', 'e'};
    cout << myChar.size() << '\n';
    cout << "До сортировки\n";
    for (auto i : myChar) { cout << i << ' '; } cout << endl;
    cout << "Рандомно\n";
    srand(time(0));
    random_shuffle(myChar.begin(), myChar.end());
    for (auto i : myChar) { cout << i << ' '; } cout << endl;
    cout << "По возрастани\n";
    sort(myChar.begin(), myChar.end());
    for (auto i : myChar) { cout << i << ' '; } cout << endl;
    cout << "По убыванию\n";
    sort(myChar.rbegin(), myChar.rend());
    for (auto i : myChar) { cout << i << ' '; } cout << endl;
    cout << "Сортировка строкового вектора\n";
    vector<string> myStr {"about", "bag", "cancel", "delay", "empty"};
    cout << "До сортировки\n";
    for (auto i : myStr) { cout << i << ' '; } cout << endl;
    cout << "Рандомно\n";
    random_shuffle(myStr.begin(), myStr.end());
    for (auto i : myStr) { cout << i << ' '; } cout << endl;
    cout << "По возрастани\n";
    sort(myStr.begin(), myStr.end());
    for (auto i : myStr) { cout << i << ' '; } cout << endl;
    cout << "По убыванию\n";
    sort(myStr.rbegin(), myStr.rend());
    for (auto i : myStr) { cout << i << ' '; } cout << endl;
    return 0;
}
// Output:
/*
Сортировка символьного вектора
5
До сортировки
a b c d e
Рандомно
a d e c b
По возрастани
a b c d e
По убыванию
e d c b a
Сортировка строкового вектора
До сортировки
alpha beta cent delay gamma
Рандомно
cent gamma beta alpha delay
По возрастани
alpha beta cent delay gamma
По убыванию
gamma delay cent beta alpha
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
