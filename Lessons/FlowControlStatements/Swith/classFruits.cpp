// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Классификация фруктов
// classFruits.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

//const int CITRUS = 0, TROPICAL = 1;
enum class Fruits { CITRUS, TROPICAL }; // Так лучше, потому что занимает 0 байт в оператовной памяти
// в перечислениях всё начинается от 0
int main() {
    int choice = 0;
    cin >> choice;
    Fruits fru = (Fruits)(choice);
    switch (fru)
    {
    case Fruits::CITRUS:
        puts("🍋");
        puts("🍊");
        puts("🟠");
        break;
    case Fruits::TROPICAL:
        puts("🍌");
        puts("🥭");
        puts("🍍");
    default:
        puts("?");
        break;
    }
   /*  switch (choice)
    {
       case CITRUS:
           puts("🍋");
           puts("🍊");
           puts("🟠");
           break;
       case TROPICAL:
           puts("🍌");
           puts("🥭");
           puts("🍍");
           break;
       default:
           puts("?");
           break;
    } */
    return 0;
}
// Д.З. Добавить в эту программу ягоды
/* Output:
1
🍌
🥭
🍍
?
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//