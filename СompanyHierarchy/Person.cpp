#include "Person.h"
#include <iostream>

Person::Person(std::string n) : name(n) {}

Person::~Person() {
    std::cout << "[~Person] destroyed\n";
}

void Person::staticGreet() const {
    std::cout << "[Static] Hello, I am a Base Person.\n";
}

void Person::show() const {
    std::cout << "[Virtual] Person: " << name << "\n";
}

void Person::getRole() const {
    std::cout << "[Virtual] Role: Base Person\n";
}
