// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// justEnum.cpp SimpleEnums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/*
Перечисления - это множество целочисленных констант
Все перечислители enum находятся в едином пространстве имён
*/

enum Colors { // Colors - идентификатор перечисления
    YELLOW,
    WHITE,
    ORANGE,
    GREEN
};

// Эта группа никак не обозначена.
enum { DOG, CAT, BIRD, CAPYBARA }; // Без переменной перечисляемого типа
// И эта группа никак не обозначена
enum { ELEPHANT, HIPPO, WHALE };

/* enum SmallAnimals { DOG = 10, CAT = 3, BIRD = 1, CAPYBARA = 10 }; // С переменной перечисляемого типа
// Значения констант - это вес животных в килограммах
// Не присваивайте одинаковые значения 2-м перечислителям!
enum BigAnimals { ELEPHANT = 7000, HIPPO = 1600, WHALE = 150000}; // Вес сразу не пиши! */

int main() {
    Colors colorOrange = ORANGE;
    cout << "Colors color = ORANGE: " << colorOrange << endl;
    Colors colorWhite(WHITE);
    cout << "Colors colorWhite(WHITE): " << colorWhite << endl;
    int colorGreen = GREEN;
    cout << "int colorGreen = GREEN: " << colorGreen << endl;
    cout << "Yello value: " << YELLOW << endl;
    cout << "Собака " << DOG << " Кошка " << CAT << endl;
    cout << "Выберите животное - собака 0, кошка - 1, птица - 2, капибара 3\n";
    int userInput = 0;
    cin >> userInput;
    switch (userInput)
    {
    case 0:
        cout << "Собака\n";
        break;
    case 1:
        cout << "Кошка\n";
        break;
    case 2:
        cout << "Птица\n";
        break;
    case 3:
        cout << "Кабибара\n";
        break;
    default:
        cout << "Что?\n";
        break;
    }
    return 0;
}
/* Output:
Собака 0 Кошка 1
Выберите животное - собака 0, кошка - 1, птица - 2, капибара 3
9
Что?
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
