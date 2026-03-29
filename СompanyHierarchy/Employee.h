#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include "IPrintable.h"

class Employee : public Person, public IPrintable {
protected:
    int exp;
public:
    Employee(std::string n = "Unknown", int e = 0);
    ~Employee() override;

    void staticGreet() const;

    void show() const override;
    void getRole() const override;
    void performTask() const override;

    void printInfo() const override;
};

#endif
