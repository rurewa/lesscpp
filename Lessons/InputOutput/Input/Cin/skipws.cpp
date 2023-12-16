// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// skipws, noskipws
// skipws.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
    /* По умолчанию оператор >> пропускает пробелы.
    Пробелы табуляции, возврат каретки и пустые места считаются пробелами.
    Уничтожает пробелы и Enter-ы */
    int a = 0, b = 0, c = 0;
    //cin.unsetf(ios_base::skipws); // Прекращает читать до 1-го пробела
    //cin >> a >> b >> c;
    cin >> a >> b >> noskipws >> c; // noskipws - ведёт себя так же, как cin.unsetf(ios_base::skipws);
    system("clear");
    puts("noskipws");
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}
// Output:
/*
noskipws
1 2 0
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//