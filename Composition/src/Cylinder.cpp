/*This code contains the methods of the class "Cylinder". Cylinder is composed by a "Circle" and a height.*/
#include "Cylinder.h"
#include "Point.h"
#include "Circle.h"
#include <iostream>

using namespace std;

Cylinder::Cylinder(){
    Circle c;
    this->c = c;
    height = 15;
}
Cylinder::Cylinder(Circle c, double height){
    this->c = c;
    if (height < 0)
        height = 15;
    else
        setHeight(height);
}
Cylinder::~Cylinder(){
}
void Cylinder::setHeight(double height){
    this->height = height;
}
double Cylinder::getHeight() const{
    return height;
}
void Cylinder::setPoint(double x, double y){
    c.setX(x);
    c.setY(y);
}
void Cylinder::setX(double x){
    c.setX(x);
}
void Cylinder::setY(double y){
    c.setY(y);
}
void Cylinder::setRadius(double radius){
    c.setRadius(radius);
}
double Cylinder::getX() const{
    return c.getX();
}
double Cylinder::getY() const{
    return c.getY();
}
double Cylinder::getRadius() const{
    return c.getRadius();
}
void Cylinder::PrintCylinder() const{
    cout << "Cylinder: " << endl;
    c.PrintCircle();
    cout << "Height: " << getHeight() << endl;
}
