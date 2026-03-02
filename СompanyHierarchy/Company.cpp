#include "Company.h"
#include <iostream>

Company::Company() : title("Default Ltd"), budget(1000) {
    std::cout << "Company default constructor called." << std::endl;
}

Company::Company(std::string t, int b) : title(t), budget(b) {
    std::cout << "Company " << title << " initialized with budget " << budget << std::endl;
}

Company::~Company() {
    std::cout << "Company " << title << " liquidated." << std::endl;
}

void Company::displayInfo() {
    std::cout << "Company: " << title << " | Budget: $" << budget << std::endl;
}
