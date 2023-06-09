// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Какая-то программа
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include <iostream>
using namespace std;
int main(){
    int one_w = 0;
    int two_w = 0;
    int three_w = 0;
    while (true) {
        while (true) {
            ++two_w;
            while (true) {
                ++one_w;
                ++three_w;
                cout << "Количество подходов в цикле: " << one_w << ' ' << "Количество циклов: " << two_w << ' ' << "Общее количество подходов: " << three_w << '\n';
                if (one_w == 3) {
                    one_w = 0;
                    break;
                }
            }
            if (one_w == 0) {
                break;
            }
        }
        if (two_w == 3) {
            break;
        }
    }
    return 0;
}