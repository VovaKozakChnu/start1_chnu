#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : public Employee {
private:
    int teamSize;
public:
    Manager(std::string n = "Unknown", int e = 0, int t = 0);
    ~Manager() override;

    void getRole() const override final;
    void show() const override;
    void performTask() const override;
};

#endif
