#include "Person.h"
#include <iostream>
#include <cstring>

Person::Person(const char* n) {
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    std::cout << "[Person] Created: " << name << std::endl;
}

Person::Person(const Person& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    std::cout << "[Person] Copied: " << name << std::endl;
}

Person::Person(Person&& other) noexcept : name(other.name) {
    other.name = nullptr;
    std::cout << "[Person] Moved: " << (name ? name : "nullptr") << std::endl;
}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        std::cout << "[Person] Copy Assigned: " << name << std::endl;
    }
    return *this;
}

Person& Person::operator=(Person&& other) noexcept {
    if (this != &other) {
        delete[] name;
        name = other.name;
        other.name = nullptr;
        std::cout << "[Person] Move Assigned" << std::endl;
    }
    return *this;
}

Person::~Person() {
    std::cout << "[Person] Destroyed: " << (name ? name : "nullptr") << std::endl;
    delete[] name;
}

void Person::show() const {
    std::cout << "Person: " << (name ? name : "nullptr") << std::endl;
}
