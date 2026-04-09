#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <fstream>
#include <vector>

class Company {
private:
    std::string title;
    int budget;
public:
    Company(std::string t = "TechCorp", int b = 0);

    void updateBudget(int b);
    void saveToDb();   // Пункт 6 (Файли)
    void loadFromDb(); // Пункт 7 (Перезапуск)
    void logAction(std::string action); // Пункт 8 (Історія)

    void printInfo() const;
};
#endif
