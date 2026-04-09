#include "Employee.h"
#include <iostream>

Employee::Employee(std::string n, int e) : Person(n), exp(e) {}
void Employee::show() const { std::cout << "Employee: " << name << ", Exp: " << exp << "\n"; }
void Employee::getRole() const { std::cout << "Standard Employee\n"; }
void Employee::performTask() const { std::cout << "Working...\n"; }
