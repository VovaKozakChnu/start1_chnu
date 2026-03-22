#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include "Manager.h"

class Company {
private:
    std::string title;
    int budget;
    Manager ceo;
public:
    Company(std::string t, int b, const Manager& m);
    ~Company();
    void info() const;
};
#endif
