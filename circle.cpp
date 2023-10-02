#include <iostream>
#include <string>
#include <iomanip>

class Circle {
private:
    double radius;
    std::string color;

public:
    // Constructors
    Circle(double r = 1.0, std::string c = "red") : radius(r), color(c) {}

    // Getter methods
    double getRadius() const {
        return radius;
    }

    std::string getColor() const {
        return color;
    }

    double getArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Declare and Construct an instance of the Circle class called c1
    Circle c1(2.0, "blue");
    std::cout << "The radius is: " << c1.getRadius() << std::endl;
    std::cout << "The color is: " << c1.getColor() << std::endl;
    std::cout << "The area is: " << std::fixed << std::setprecision(2) << c1.getArea() << std::endl;

    // Declare and Construct another instance of the Circle class called c2
    Circle c2(2.0);
    std::cout << "The radius is: " << c2.getRadius() << std::endl;
    std::cout << "The color is: " << c2.getColor() << std::endl;
    std::cout << "The area is: " << std::fixed << std::setprecision(2) << c2.getArea() << std::endl;

    // Declare and Construct yet another instance of the Circle class called c3
    Circle c3;
    std::cout << "The radius is: " << c3.getRadius() << std::endl;
    std::cout << "The color is: " << c3.getColor() << std::endl;
    std::cout << "The area is: " << std::fixed << std::setprecision(2) << c3.getArea() << std::endl;

    return 0;
}
