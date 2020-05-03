#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle{
public:
    Circle();
    Circle(Point p, double radius);
    ~Circle();
    void setRadius(double radius);
    double getRadius() const;
    void setPoint(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void PrintCircle() const;
private:
    Point p;
    double radius;
};

#endif // CIRCLE_H
