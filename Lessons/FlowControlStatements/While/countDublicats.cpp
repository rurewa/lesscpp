// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Подсчёт повторов
// countDublicats.cpp While
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

int main() {
	int firstUserNum = 0, otherUserNum = 0; // 1-е и 2-е число из входного потока
	// прочтите первое число и убедитесь, что у нас есть данные для обработки
	puts("Для завершения программы введите любую букву. Введите число");
	if (cin >> firstUserNum) {
		int counter = 1; // сохраните количество для текущего значения, которое мы обрабатываем
		while (cin >> otherUserNum) { // прочтите из входного потока оставшиеся цифры
			if (otherUserNum == firstUserNum) // если значения одинаковы
				++counter;			          // добавьте 1 к counter
			else { // в противном случае выведите количество для предыдущего значения
				cout << firstUserNum << " встречается "
					 << counter << " раз" << endl;
				firstUserNum = otherUserNum; // запомните новое значение
				counter = 1;	             // сбросьте счетчик
			}
		} // цикл while заканчивается здесь
		// не забываем вывести количество для последнего значения в файле
		cout << firstUserNum << " повторяется " << counter << " раз(а)" << endl;
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