//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Поиск дубликатор в массиве с числами
// finDublicInArr.cpp
// V 1.0
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;

int main() {
    int arr[] {4, 7, 8, 8, 6, 5, 6, 4, 6, 8};
    const int LENGHT = sizeof(arr) / sizeof(*arr);
    int find = 0;
    for (int i = 0; i < LENGHT; ++i) {
        for (int k = i + 1; k != LENGHT; ++k) {
            if (arr[i] == arr[k]) {
                for (int n = k - 1; n >= 0; --n) {
                    if (arr[k] == arr[n])
                        ++find;
                }
                if (find == 1) {
                    cout << arr[i] << ' ';
                }
                find = 0;
            }
        }
    }
    cout << '\n';
    return 0;
}
// Д.З.
// Output
/*
4 8 6
*/
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// End file
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-