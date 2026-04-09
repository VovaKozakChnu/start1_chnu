#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee : public Person {
protected:
    int exp;
public:
    Employee(std::string n = "Unknown", int e = 0);
    void show() const override;
    void getRole() const override;
    void performTask() const override;
    int getExp() const { return exp; }
};
#endif
