// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
// Задача 5 Покраска забора
// https://otvet.mail.ru/question/233058304
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-= -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int M;
    cin >> ws >> M; // Вводим число (количество символов в строке)
    string text;
    getline(cin, text); // Вводим текст
    vector<int> dp(text.size() + 1, 1e9);
    dp[text.size()] = 0;
    for (int i = text.size() - 1; i >= 0; --i) {
        for (int j = i + 1; j <= min(i + M, (int)text.size()); ++j) {
            dp[i] = min(dp[i], dp[j] + 1);
        }
    }

    vector<string> ans;
    int i = 0;
    while (i < text.size()) {
        for (int j = i + 1; j <= min(i + M, (int)text.size()); ++j) {
            if (dp[j] + 1 == dp[i]) {
                ans.push_back(text.substr(i, j - i));
                i = j;
                break; // Прыжок из цикла
            }
        }
    }
    for (const auto &s : ans) {
        cout << s << '\n';
    }
    return 0;
}
// OUTPUT
/*
7 One, two and three
 One,
 two an
d three
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//