#include <iostream>
using namespace std;

int main() {
    const int A = 0; // const - константа
    int b = 3, c = 7;
    int result = A + b + c;
    cout << result << endl;
    b = 5;
    //A = 4; // Попытка перезаписать константу = ошибка!
    cout << A << endl;
    return 0;
}
