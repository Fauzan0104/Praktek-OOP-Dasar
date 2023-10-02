#include <iostream>
#include <iomanip>

class Date {
private:
    int year;
    int month;
    int day;

public:
    // Constructors
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    // Setters
    void setYear(int y) {
        year = y;
    }

    void setMonth(int m) {
        month = m;
    }

    void setDay(int d) {
        day = d;
    }

    // Getters
    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    // Method to set the date
    void setDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    // Method to display the date
    void displayDate() const {
        std::cout << std::setfill('0') << std::setw(2) << month << "/"
                  << std::setw(2) << day << "/" << year << std::endl;
    }
};

int main() {
    // Test constructor and displayDate()
    Date d1(2020, 2, 8);
    d1.displayDate();  // displayDate()
    
    // Test Setters and Getters
    d1.setYear(2012);
    d1.setMonth(12);
    d1.setDay(23);
    d1.displayDate();
    std::cout << "Year is: " << d1.getYear() << std::endl;
    std::cout << "Month is: " << d1.getMonth() << std::endl;
    std::cout << "Day is: " << d1.getDay() << std::endl;

    // Test setDate()
    d1.setDate(2988, 1, 2);
    d1.displayDate();

    return 0;
}
