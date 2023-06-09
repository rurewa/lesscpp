// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Подсчёт повторов
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
	int currVal = 0, val = 0;
	// прочтите первое число и убедитесь, что у нас есть данные для обработки
	if (cin >> currVal) {
		int cnt = 1; // сохраните количество для текущего значения, которое мы обрабатываем
		while (cin >> val) { // прочтите оставшиеся цифры
			if (val == currVal) // если значения одинаковы
				++cnt;			// добавьте 1 к cnt
			else { // в противном случае выведите количество для предыдущего значения
				cout << currVal << " встречается "
					 << cnt << " раз" << endl;
				currVal = val; // запомните новое значение
				cnt = 1;	   // сбросьте счетчик
			}
		} // цикл while заканчивается здесь
		// не забудьте вывести количество для последнего значения в файле
		cout << currVal << " встречается " << cnt << " раз(а)" << endl;
	} // if заканчивается здесь
	return 0;
}
// Output
/*
1
1
e
1 встречается 2 раз
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//