#include <iostream>
#include <cmath>
#include <iomanip>

class Point {
private:
    double x;
    double y;

public:
    // Constructors
    Point(double xVal = 0.0, double yVal = 0.0) : x(xVal), y(yVal) {}

    // Setters
    void setX(double xVal) {
        x = xVal;
    }

    void setY(double yVal) {
        y = yVal;
    }

    void setXY(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Getters
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Method to calculate distance to another point
    double distance(double xVal, double yVal) const {
        double dx = x - xVal;
        double dy = y - yVal;
        return std::sqrt(dx * dx + dy * dy);
    }

    double distance(const Point& otherPoint) const {
        return distance(otherPoint.x, otherPoint.y);
    }

    double distance() const {
        return std::sqrt(x * x + y * y);
    }

    // Method to display the point
    void displayPoint() const {
        std::cout << "(" << x << "," << y << ")" << std::endl;
    }
};

int main() {
    // Test constructors and displayPoint()
    Point p1(1, 2);
    p1.displayPoint();

    Point p2;
    p2.displayPoint();

    // Test Setters and Getters
    p1.setX(3);
    p1.setY(4);
    p1.displayPoint();
    std::cout << "X is: " << p1.getX() << std::endl;
    std::cout << "Y is: " << p1.getY() << std::endl;

    // Test setXY() and getXY()
    p1.setXY(5, 6);
    p1.displayPoint();
    std::cout << "X is: " << p1.getX() << std::endl;
    std::cout << "Y is: " << p1.getY() << std::endl;

    // Test the 3 overloaded versions of distance()
    Point p3(10, 11);
    std::cout << "Distance is: " << std::fixed << std::setprecision(2) << p1.distance(10, 11) << std::endl;
    std::cout << "Distance is: " << std::fixed << std::setprecision(2) << p1.distance(p3) << std::endl;
    std::cout << "Distance is: " << std::fixed << std::setprecision(2) << p3.distance(p1) << std::endl;
    std::cout << "Distance is: " << std::fixed << std::setprecision(2) << p1.distance() << std::endl;

    return 0;
}
