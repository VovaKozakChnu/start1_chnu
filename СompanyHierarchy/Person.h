#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
protected:
    std::string name;
public:
    Person(std::string n = "Unknown");
    virtual ~Person();

    virtual void show() const;
    virtual void getRole() const;
    virtual void performTask() const;
};
#endif
