#include "Employee.h"
#include <iostream>

Employee::Employee(std::string n, int e) : Person(n), exp(e) {}

Employee::~Employee() {
    std::cout << "[~Employee] destroyed\n";
}

void Employee::staticGreet() const {
    std::cout << "[Static] Hello, I am an Employee.\n";
}

void Employee::show() const {
    std::cout << "[Virtual] Employee: " << name << " | Exp: " << exp << "\n";
}

void Employee::getRole() const {
    std::cout << "[Virtual] Role: Standard Employee\n";
}

void Employee::performTask() const {
    std::cout << "[Pure Virtual] Employee is writing code.\n";
}

void Employee::printInfo() const {
    std::cout << "[Interface] Employee Info -> Name: " << name << "\n";
}
