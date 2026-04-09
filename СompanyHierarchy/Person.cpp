#include "Person.h"
#include <iostream>

Person::Person(std::string n) : name(n) {}
Person::~Person() {}
void Person::show() const { std::cout << "Name: " << name << "\n"; }
void Person::getRole() const { std::cout << "Base Person\n"; }
void Person::performTask() const { std::cout << "No task\n"; }
