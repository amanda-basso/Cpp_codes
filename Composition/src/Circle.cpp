/*This code contains the methods of the class "Circle". Circle is composed by a central "Point" and a radius.*/
#include "Circle.h"
#include "Point.h"
#include <iostream>

using namespace std;

Circle::Circle(){
    Point p;
    this->p = p;
    radius = 10;
}
Circle::Circle(Point p, double radius){
    this->p = p;
    if (radius < 0)
        radius = 10;
    else
        setRadius(radius);
}
Circle::~Circle(){
}
void Circle::setRadius(double radius){
    this->radius = radius;
}
double Circle::getRadius() const{
    return radius;
}
void Circle::setPoint(double x, double y){
    p.setX(x);
    p.setY(y);
}
void Circle::setX(double x){
    p.setX(x);
}
void Circle::setY(double y){
    p.setY(y);
}
double Circle::getX() const{
    return p.getX();
}
double Circle::getY() const{
    return p.getY();
}
void Circle::PrintCircle() const{
    cout << "Radius: " << getRadius() << endl << "Point: (" << p.getX() << " , " << p.getY() << ")" << endl;
}
