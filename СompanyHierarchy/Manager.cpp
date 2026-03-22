#include "Manager.h"
#include <iostream>

Manager::Manager(const char* n, int e, int t) : Employee(n, e), teamSize(t) {
    std::cout << "[Manager] Created" << std::endl;
}

Manager::~Manager() {
    std::cout << "[Manager] Destroyed" << std::endl;
}

void Manager::show() const {
    std::cout << "Manager: " << (name ? name : "nullptr") << " | Exp: " << exp << " | Team: " << teamSize << std::endl;
}
