#include "Company.h"
#include <iostream>

Company::Company(std::string t, int b, const Manager& m) : title(t), budget(b), ceo(m) {
    std::cout << "[Company] Created: " << title << std::endl;
}

Company::~Company() {
    std::cout << "[Company] Destroyed: " << title << std::endl;
}

void Company::info() const {
    std::cout << "Company: " << title << " | Budget: $" << budget << std::endl;
    std::cout << "CEO Info -> ";
    ceo.show();
}
