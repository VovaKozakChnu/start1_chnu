#include "Company.h"
#include "Exceptions.h"
#include <iostream>

Company::Company(std::string t, int b) : title(t), budget(b) {}

void Company::updateBudget(int b) {
    budget = b;
    logAction("Admin updated budget to " + std::to_string(b));
}

void Company::saveToDb() {
    std::ofstream out("company_data.txt");
    if (!out) throw FileException(); // Пункт 9
    out << title << "\n" << budget << "\n";
    out.close();
}

void Company::loadFromDb() {
    std::ifstream in("company_data.txt");
    if (in) {
        in >> title >> budget;
    }
}

void Company::logAction(std::string action) {
    std::ofstream out("user_history.txt", std::ios::app); // Додавання в кінець
    out << "[LOG]: " << action << "\n";
}

void Company::printInfo() const {
    std::cout << "Company: " << title << " | Budget: " << budget << "$\n";
}
