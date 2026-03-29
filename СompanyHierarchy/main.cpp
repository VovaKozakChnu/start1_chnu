#include "Person.h"
#include "Employee.h"
#include "Manager.h"
#include "Company.h"
#include "IPrintable.h"
#include <iostream>

void inspectPerson(const Person& p) {
    std::cout << "--- Inspecting via Reference ---\n";
    p.show();
    p.performTask();
}

int main() {
    std::cout << "=== 1. Static Method Binding Problem ===\n";
    Employee emp1("Alice", 5);
    Person* ptr1 = &emp1;

    ptr1->staticGreet();

    std::cout << "\n=== 2 & 3. Virtual Functions & Base Pointer ===\n";
    ptr1->show();
    ptr1->getRole();

    std::cout << "\n=== 5. Final Modifier ===\n";
    Manager mgr1("Bob", 10, 4);
    Person* ptr2 = &mgr1;
    ptr2->getRole();

    std::cout << "\n=== 6. Base Class Reference ===\n";
    inspectPerson(emp1);
    inspectPerson(mgr1);

    std::cout << "\n=== 8. Interfaces on Different Classes ===\n";
    Company comp1("TechCorp");

    IPrintable* items[2];
    items[0] = &emp1;
    items[1] = &comp1;

    for (int i = 0; i < 2; i++) {
        items[i]->printInfo();
    }

    std::cout << "\n=== 4. Virtual Destructors ===\n";
    Person* pDestroy = new Manager("Charlie", 15, 10);
    delete pDestroy;

    return 0;
}
