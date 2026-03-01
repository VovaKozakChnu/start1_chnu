#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee() : name("Unknown"), age(0), salary(0) {}
    Employee(string n, int a = 18, double s = 500) : name(n), age(a), salary(s) {}

    void show() {
        cout << "Employee: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }

    ~Employee() {
        cout << "Employee deleted: " << name << endl;
    }
};

class Department {
private:
    string depName;
    int workers;

public:
    Department() : depName("No department"), workers(0) {}
    Department(string name, int w = 0) : depName(name), workers(w) {}

    void show() {
        cout << "Department: " << depName << ", Workers: " << workers << endl;
    }

    ~Department() {
        cout << "Department deleted: " << depName << endl;
    }
};

class Company {
private:
    string companyName;
    string city;

public:
    Company() : companyName("Unknown"), city("Unknown") {}
    Company(string name, string c = "Kyiv") : companyName(name), city(c) {}

    void show() {
        cout << "Company: " << companyName << ", City: " << city << endl;
    }

    ~Company() {
        cout << "Company deleted: " << companyName << endl;
    }
};

int main() {
    Employee e1("Ivan", 25, 1200);
    Employee e2("Petro"); // тепер працює без помилки
    Department d1("IT", 10);
    Company c1("TechCorp", "Lviv");

    e1.show();
    e2.show();
    d1.show();
    c1.show();

    return 0;
}
