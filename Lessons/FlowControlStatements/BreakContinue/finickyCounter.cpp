// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Использование операторов контроля управления потоком break и continue
// Эти операторы работают только в цикле!
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include<iostream>
using namespace std;

int main() {
    int count = 0;
    while (true) {
        ++count;
        if (count > 10) { // Доходим до 10
            break;  // И выходим
        }
        if (count == 5) {
            continue; // Пропускаем число 5
        }
        cout << count << endl;
    }
    return 0;
}
// Output:
/*
1
2
3
4
6
7
8
9
10
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
