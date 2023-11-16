// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Вычисление среднего орифметического из n-количества чисел
// add_average_cal.cpp Array/Vector
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    static int sum = 0;
    int arrSize = 0;
    int userNum;
    vector<int> arr;
    puts("");
    // Для ввода числа от пользователя
    while (cin >> userNum) {
        arr.push_back(userNum); // Добавляем в массив числа пользователя
        arrSize = arr.size();
        cout << "размер массива: " << arrSize << '\t';
    }
    // Для вычесления суммы всех элементов массива
    for (int i = 0; i <= arrSize; ++i) {
        //cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << sum/arrSize << endl;

    return 0;
}
// Output:
/*

*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
