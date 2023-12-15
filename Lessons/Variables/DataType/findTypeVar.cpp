// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Как узнать тип переменной C++
// findTypeVar.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
//#include <typeinfo> // Возможно понадобится подключить
using namespace std;

int main() {
    // Создадим четыре переменные разных типов
    int int_var = 1;
    float float_var = 1.0;
    char char_var = '0';
    string str1 = "www.yandex.ru";
    // Выведем на экран результат работы typeid
    cout << typeid(int_var).name() << endl;
    cout << typeid(float_var).name() << endl;
    cout << typeid(char_var).name() << endl;
    cout << typeid(str1).name() << endl;
    return 0;
}
// OUTPUT
/*
i
f
c
NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//