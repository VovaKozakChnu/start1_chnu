#include "Employee.h"
#include <iostream>

Employee::Employee(std::string n, int exp) : name(n), experience(exp) {
    std::cout << "Employee " << name << " created with " << experience << " years of exp." << std::endl;
}

Employee::Employee(std::string n) : Employee(n, 0) {
    std::cout << "Delegated constructor for " << name << std::endl;
}

Employee::~Employee() {
    std::cout << "Employee " << name << " destroyed." << std::endl;
}

void Employee::showInfo() {
    std::cout << "Name: " << name << " | Experience: " << experience << std::endl;
}
