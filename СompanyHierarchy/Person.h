#ifndef PERSON_H
#define PERSON_H

class Person {
protected:
    char* name;
public:
    Person(const char* n = "Unknown");
    Person(const Person& other);
    Person(Person&& other) noexcept;

    Person& operator=(const Person& other);
    Person& operator=(Person&& other) noexcept;

    virtual ~Person();
    virtual void show() const;
};
#endif
