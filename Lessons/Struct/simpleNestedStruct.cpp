// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример вложенных структур
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <iostream>

struct Employe { // Работник
    short id;
    int age;
    double salary; // Зарплата
};

struct Company {
    Employe CEO;
    int numberOfEmployees;
};

int main() {
    Company myCompany{{ 3, 35, 55000.0f }, 7};
    std::cout << "Company CEO: " << myCompany.CEO.age << std::endl;
    std::cout << "Employe: " << myCompany.numberOfEmployees << std::endl;
    return 0;
}
/* Output:
Company CEO: 35
Employe: 7
*/
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
