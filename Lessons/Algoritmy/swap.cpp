//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Программа замены значения 2-х переменных
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 5, b = 7;
    cout << "Before: " << a << ' ' << b << endl;
    swap(a, b);
    cout << "After: "<< a << ' ' << b << endl;
    string word1 = "Hello";
    string word2 = "World";
    swap(word1, word2);
    cout << word1 << word2 << endl;
    int arr[] = {1, 2, 3};
    swap(arr[0], arr[1]);
    cout << arr[0] << arr[1] << arr[2]<< endl;
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
// Output
/*
Before: 5 7
After: 7 5
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
