#include<iostream>
using namespace std;

class Person {
public:
    virtual void work() {
        cout << "Person is working." << endl;
    }
};

class Employee : public Person {
public:
    void work() override {
        cout << "Employee is working." << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "Manager is working." << endl;
    }
};

int main() {
    Person person;
    Employee employee;
    Manager manager;

    person.work();
    employee.work();
    manager.work();

    return 0;
}

