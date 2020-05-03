#include "Point.h"
#include "Circle.h"
#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder{
public:
    Cylinder();
    Cylinder(Circle c, double height);
    ~Cylinder();
    void setHeight(double height);
    double getHeight() const;
    void setRadius(double radius);
    double getRadius() const;
    void setPoint(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void PrintCylinder() const;
private:
    Circle c;
    double altura;
};

#endif // CYLINDER_H
