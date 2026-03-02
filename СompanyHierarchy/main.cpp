#include "Employee.h"
#include "Manager.h"
#include "Company.h"
#include <iostream>

int main() {
    Employee emp1("John", 5);
    Employee emp2("Alice");

    Manager m1("Robert", "IT");
    Manager m2;

    Company c1("Cyberdyne", 1000000);
    Company c2;

    std::cout << "\n--- COMPANY REPORT ---\n";
    c1.displayInfo();
    m1.printStatus();
    emp1.showInfo();
    std::cout << "----------------------\n\n";

    return 0;
}
