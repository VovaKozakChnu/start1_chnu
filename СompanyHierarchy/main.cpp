#include "Person.h"
#include "Employee.h"
#include "Manager.h"
#include "Company.h"
#include <iostream>

int main() {
    std::cout << "--- 1. Testing Hierarchy & Constructors Sequence ---" << std::endl;
    Manager m1("Alice", 10, 5);
    m1.show();

    std::cout << "\n--- 2. Testing Composition (Has-A) ---" << std::endl;
    Company c1("TechCorp", 1000000, m1);
    c1.info();

    std::cout << "\n--- 3. Testing Copy/Move & Operator= ---" << std::endl;
    Employee e1("Bob", 3);
    Employee e2("Charlie", 5);

    e2 = e1;
    e2.show();

    Employee e3("Temp", 0);
    e3 = std::move(e1);
    e3.show();

    std::cout << "\n--- 4. Destructors Sequence ---" << std::endl;
    return 0;
}
