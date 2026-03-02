#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    int experience;

public:
    Employee(std::string n, int exp);
    Employee(std::string n);
    ~Employee();

    void showInfo();
};

#endif
