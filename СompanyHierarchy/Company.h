#ifndef COMPANY_H
#define COMPANY_H

#include <string>

class Company {
private:
    std::string title;
    int budget;

public:
    Company();
    Company(std::string t, int b);
    ~Company();

    void displayInfo();
};

#endif
