#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee : public Person {
protected:
    int exp;
public:
    Employee(const char* n = "Unknown", int e = 0);
    Employee(const Employee& other);
    Employee(Employee&& other) noexcept;

    Employee& operator=(const Employee& other);
    Employee& operator=(Employee&& other) noexcept;

    ~Employee() override;
    void show() const override;
};
#endif
