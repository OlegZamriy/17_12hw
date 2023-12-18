
#include "point.h"

int Point::pointCount = 0;

Point::Point() : x(0.0), y(0.0), z(0.0) {
    pointCount++;
}

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {
    pointCount++;
}

void Point::input() {
    std::cout << "Enter x coordinate: ";
    std::cin >> x;

    std::cout << "Enter y coordinate: ";
    std::cin >> y;

    std::cout << "Enter z coordinate: ";
    std::cin >> z;
}

void Point::display() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

void Point::saveToFile(const Point& point, const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << point.x << " " << point.y << " " << point.z;
        outFile.close();
    }
    else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

Point Point::loadFromFile(const std::string& filename) {
    Point loadedPoint;
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        inFile >> loadedPoint.x >> loadedPoint.y >> loadedPoint.z;
        inFile.close();
    }
    else {
        std::cerr << "Unable to open file for reading.\n";
    }
    return loadedPoint;
}

int Point::getPointCount() {
    return pointCount;
}
