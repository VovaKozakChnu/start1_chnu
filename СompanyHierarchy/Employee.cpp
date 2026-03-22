#include "Employee.h"
#include <iostream>
#include "Employee.h"
#include <iostream>
#include <utility>

Employee::Employee(const char* n, int e) : Person(n), exp(e) {
    std::cout << "[Employee] Created" << std::endl;
}

Employee::Employee(const Employee& other) : Person(other), exp(other.exp) {
    std::cout << "[Employee] Copied" << std::endl;
}

Employee::Employee(Employee&& other) noexcept : Person(std::move(other)), exp(other.exp) {
    other.exp = 0;
    std::cout << "[Employee] Moved" << std::endl;
}

Employee& Employee::operator=(const Employee& other) {
    if (this != &other) {
        Person::operator=(other);
        exp = other.exp;
        std::cout << "[Employee] Copy Assigned" << std::endl;
    }
    return *this;
}

Employee& Employee::operator=(Employee&& other) noexcept {
    if (this != &other) {
        Person::operator=(std::move(other));
        exp = other.exp;
        other.exp = 0;
        std::cout << "[Employee] Move Assigned" << std::endl;
    }
    return *this;
}

Employee::~Employee() {
    std::cout << "[Employee] Destroyed" << std::endl;
}

void Employee::show() const {
    std::cout << "Employee: " << (name ? name : "nullptr") << " | Exp: " << exp << std::endl;
}
