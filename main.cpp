#include "point.h"

int main() {
    Point point1, point2;

    std::cout << "Enter coordinates for point 1:\n";
    point1.input();

    std::cout << "\nEnter coordinates for point 2:\n";
    point2.input();

    std::cout << "\nPoint 1: ";
    point1.display();
    std::cout << "\nPoint 2: ";
    point2.display();

    Point::saveToFile(point1, "point1.txt");

    Point loadedPoint = Point::loadFromFile("point1.txt");

    std::cout << "\nLoaded Point from file: ";
    loadedPoint.display();

    std::cout << "\nTotal number of points: " << Point::getPointCount() << "\n";

    return 0;
}
