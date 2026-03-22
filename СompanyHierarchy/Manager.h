#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : public Employee {
private:
    int teamSize;
public:
    Manager(const char* n = "Unknown", int e = 0, int t = 0);
    ~Manager() override;
    void show() const override;
};
#endif
