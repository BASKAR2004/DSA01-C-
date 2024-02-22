#include <iostream>
#include <string>

class Student {
public:
    // Constructor
    Student(std::string name, int age) : name(name), age(age) {
        std::cout << "Constructor called for " << name << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Member function
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // Creating an object of the Student class
    Student student1("John Doe", 20);

    // Calling a member function
    student1.displayInfo();

    // Destructor will be automatically called when the object goes out of scope

    return 0;
}

