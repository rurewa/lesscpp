// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Варианты доступа к элементам перечислений enum по выбору пользователя
// animals.cpp Enums
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

/* // Эта группа никак не обозначена.
enum { DOG, CAT, BIRD, CAPYBARA }; // Без идентификатора перечисляемого типа!
// И эта группа никак не обозначена
enum { ELEPHANT, HIPPO, WHALE }; */

// С идентификатором перечисляемого типа
enum SmallAnimals { DOG = 8, CAT = 3, BIRD = 1, CAPYBARA = 10 };
// Значения перечислений - это вес животных в килограммах
// Не присваивайте одинаковые значения 2-м перечислителям!
enum BigAnimals { ELEPHANT = 7000, HIPPO = 1600, WHALE = 150000 }; // Вес сразу не пиши!

int main() {
    // cout << "Собака " << DOG << " Кошка " << CAT << endl;
    int getUserInput = 0;
    puts("Enter the animal's number to find out its ~ weight: dog - 0, cat - 1, bird - 2, capybara - 3");
    cin >> getUserInput;
    switch (getUserInput)
    {
    case 0:
        cout << "The dog weighs " << SmallAnimals::DOG << " kg." << endl;
        break;
    case 1:
        cout << "The cat weighs " << SmallAnimals::CAT <<  " kg." << endl;
        break;
    case 2:
        cout << "The bird weighs " << SmallAnimals::BIRD <<  " kg." << endl;
        break;
    case 3:
        cout << "The capybara weighs " << SmallAnimals::CAPYBARA <<  " kg." << endl;
        break;
    default:
        puts("What?");
        break;
    }
    char again{'y'};
    puts("Do you want to know the weight of all the animals? [y/n]");
    cin >> again;
    while (again == 'y') {
        cout << "Dog: "   << SmallAnimals::DOG  << " cat: "      << SmallAnimals::CAT
             << " bird: " << SmallAnimals::BIRD << " capybara: " << SmallAnimals::CAPYBARA
             << endl;
             break;
    }
    cout << boolalpha;
    puts("how much does a dog weigh?");
    cin >> getUserInput;
    if (getUserInput == SmallAnimals::DOG) { cout << true << endl; }
    else { cout << !true << endl; }
    puts("how much does a cat weigh?");
    cin >> getUserInput;
    if (getUserInput == SmallAnimals::CAT) { cout << true << endl; }
    else { cout << !true << endl; }
    puts("how much does a bird weigh?");
    cin >> getUserInput;
    if (getUserInput == SmallAnimals::BIRD) { cout << true << endl; }
    else { cout << !true << endl; }
    puts("how much does a capybara weigh?");
    cin >> getUserInput;
    if (getUserInput == SmallAnimals::CAPYBARA) { cout << true << endl; }
    else { cout << !true << endl;  }
    return 0;
}
/* Output:
Enter the animal's number to find out its ~ weight: dog - 0, cat - 1, bird - 2, capybara - 3
3
The capybara weighs 10 kg.
Would you like to know the weight of all the animals? [y/n]
y
Dog: 8 cat: 3 bird: 1 capybara: 10
how much does a dog weigh?
8
true
how much does a cat weigh?
3
true
how much does a bird weigh?
1
true
how much does a capybara weigh?
10
true
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
