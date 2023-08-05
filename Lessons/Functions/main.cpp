// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Структура с функцией для печати на дисплей
// personFunc.cpp
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>
using namespace std;

struct Person {
    short id;
    int age;
    double salary;
};

void printInfo(Person person) {
    cout << "ID: " << person.id << endl;
    cout << "Age: " << person.age << endl;
    cout << "Salary: " << person.salary << endl;
}

int main() {
    Person alex = {1, 43, 300'000};
    Person inna = {2, 19, 50'000};
    cout << "Alex: " << endl;
    printInfo(alex);
    cout << "\n";
    cout << "Inna: " << endl;
    printInfo(inna);
    return 0;
}
/* Output:
Alex:
ID: 1
Age: 43
Salary: 300000

Inna:
ID: 2
Age: 19
Salary: 50000
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//