// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Getline для ввода строк
// getline.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    string mystr;
    cout << "Как ваше имя? ";
    //cin >> mystr;
    getline(cin, mystr);
    cout << "Привет, " << mystr << '!' << endl;
    cout << "Какой твой любимый фрукт? ";
    getline(cin, mystr);
    cout << "И я люблю " << mystr << endl;
    return 0;
}
// Output
/*
Как ваше имя? Alex Rus
Привет, Alex Rus!
[user@grip3script IncremendDecrement]$ clang++ -Wall main.cpp -o main.bin
[user@grip3script IncremendDecrement]$ ./main.bin
Как ваше имя? Alex Rus
Привет, Alex Rus!
Какой твой любимый фрукт? Banana
И я люблю Banana
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//