#include "Company.h"
#include <iostream>

Company::Company(std::string t) : title(t) {}

void Company::printInfo() const {
    std::cout << "[Interface] Company Info -> Title: " << title << "\n";
}
