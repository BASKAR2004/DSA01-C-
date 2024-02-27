#include <iostream>
#include <cmath>  // Include cmath for sqrt function

// Base class
class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double calculateArea() const = 0;  // Pure virtual function
    virtual double calculatePerimeter() const = 0;  // Pure virtual function
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double calculateArea() const override {
        return height * width;
    }

    double calculatePerimeter() const override {
        return 2 * (height + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double h, double w, double s1, double s2, double s3)
        : Shape(h, w), side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const override {
        // Using Heron's formula for the area of a triangle
        double s = (side1 + side2 + side3) / 2.0;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    using namespace std;

    Rectangle rectangle(5.0, 3.0);
    Triangle triangle(3.0, 4.0, 5.0, 4.0, 6.0);

    cout << "Rectangle - Area: " << rectangle.calculateArea()
         << ", Perimeter: " << rectangle.calculatePerimeter() << endl;

    cout << "Triangle - Area: " << triangle.calculateArea()
         << ", Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}

