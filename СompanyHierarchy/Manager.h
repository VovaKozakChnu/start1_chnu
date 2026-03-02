#ifndef MANAGER_H
#define MANAGER_H

#include <string>

class Manager {
private:
    std::string name;
    std::string department;

public:
    Manager(std::string n = "Unknown", std::string dept = "General");
    ~Manager();

    void printStatus();
};

#endif
