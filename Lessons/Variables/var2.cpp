#include<iostream>
using namespace std;

int main() {
    cout << "Программа нахождения среднего значения: " << endl;
    cout << "Введите 1-е число: ";
    int userFirstNum = 0;
    cin >> userFirstNum;
    cout << "Введите 2-е число: ";
    int userSecondNum = 0;
    cin >> userSecondNum;
    cout << "Введите 3-е число: ";
    int userThreeNum = 0;
    cin >> userThreeNum;
    int result = (userFirstNum + userSecondNum + userThreeNum) / 3;
    cout << "Результат: " << result << endl;
    return 0;
}