#include "Manager.h"
#include <iostream>

Manager::Manager(std::string n, std::string dept) : name(n), department(dept) {
    std::cout << "Manager " << name << " assigned to " << department << std::endl;
}

Manager::~Manager() {
    std::cout << "Manager " << name << " left the system." << std::endl;
}

void Manager::printStatus() {
    std::cout << "Manager: " << name << " | Dept: " << department << std::endl;
}
