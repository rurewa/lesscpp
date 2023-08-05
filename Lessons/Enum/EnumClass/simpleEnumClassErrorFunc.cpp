// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример определения отрицательного числа с помощью перечисления
// eNegativeCheck.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include<iostream>
using namespace std;

enum class ErrorCode {
    ERROR_SUCCESS = 0,
    ERROR_NEGATIVE_NUMBER = -1
};

ErrorCode doSomething(int value) {
    // Если параметром value является отрицательное число,
    if (value < 0) {
      // то сразу возвращаем код ошибки
      return ErrorCode::ERROR_NEGATIVE_NUMBER;
    }
    return ErrorCode::ERROR_SUCCESS;
}

int main() {
    cout << "Введите неотрицательное число: " << endl;
    int a;
    cin >> ws >> a;
    //cin.ignore(32767, '\n');
    if (doSomething(a) == ErrorCode::ERROR_NEGATIVE_NUMBER) {
        cout << "Вы ввели отрицательное число" << endl;
    }
    else {
        cout << "Это сработало!" << endl;
    }
    return 0;
}
// Output:
/*
Введите неотрицательное число:
3
Это сработало!
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//