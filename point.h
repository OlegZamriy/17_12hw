
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    static int pointCount;

public:
    double x;
    double y;
    double z;

    Point();
    Point(double x, double y, double z);

    void input();
    void display() const;

    double getX() const;
    double getY() const;
    double getZ() const;

    static void saveToFile(const Point& point, const std::string& filename);
    static Point loadFromFile(const std::string& filename);

    static int getPointCount();
};

#endif // POINT_H
