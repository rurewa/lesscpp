// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Random of words
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));
    vector<string> words {"i", "am", "a programmer"};
    random_shuffle(words.begin(), words.end());
    for (auto i : words) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
// Output:
/*
am i a programmer
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
