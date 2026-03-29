#ifndef COMPANY_H
#define COMPANY_H
#include "IPrintable.h"
#include <string>

class Company : public IPrintable {
private:
    std::string title;
public:
    Company(std::string t);
    void printInfo() const override;
};

#endif
