#include <iostream>
#include "Company.h"
#include "Exceptions.h"

void runAdmin(Company& c) {
    std::string pass;
    std::cout << "Enter Admin Password: ";
    std::cin >> pass;

    if (pass != "admin123") throw AuthException(); // ѕункт 3 та 9 [cite: 20, 29]

    int choice = -1;
    while (choice != 0) {
        std::cout << "\n--- ADMIN MENU ---\n1. Update Budget\n2. Save to File\n0. Logout\nChoice: ";
        std::cin >> choice;
        if (choice == 1) {
            int b; std::cout << "New budget: "; std::cin >> b;
            c.updateBudget(b);
        } else if (choice == 2) {
            c.saveToDb();
            std::cout << "Data saved!\n";
        }
    }
}

int main() {
    Company myComp;
    try { myComp.loadFromDb(); } catch(...) {}

    int role = -1;
    while (role != 0) {
        std::cout << "\n=== MAIN MENU ===\n1. Admin Mode\n2. User Mode\n0. Exit\nRole: ";
        std::cin >> role;
        try {
            if (role == 1) runAdmin(myComp);
            else if (role == 2) myComp.printInfo();
        } catch (const std::exception& e) {
            std::cerr << "!!! " << e.what() << " !!!\n";
        }
    }
    return 0;
}
