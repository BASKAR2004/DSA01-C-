#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle object created with length " << length << " and width " << width << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle object destroyed" << std::endl;
    }

    // Other member functions can be added as needed

    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Creating an instance of the Rectangle class
    Rectangle myRectangle(5.0, 3.0);

    // Using the class member function
    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    // Destructor will be called automatically when the object goes out of scope

    return 0;
}

