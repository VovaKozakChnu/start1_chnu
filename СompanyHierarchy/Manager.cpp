#include "Manager.h"
#include <iostream>

Manager::Manager(std::string n, int e, int t) : Employee(n, e), teamSize(t) {}

Manager::~Manager() {
    std::cout << "[~Manager] destroyed\n";
}

void Manager::getRole() const {
    std::cout << "[Virtual] Role: Manager (Finalized)\n";
}

void Manager::show() const {
    std::cout << "[Virtual] Manager: " << name << " | Team: " << teamSize << "\n";
}

void Manager::performTask() const {
    std::cout << "[Pure Virtual] Manager is assigning tasks to the team.\n";
}
