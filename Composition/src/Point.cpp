/*This code contains the methods of the class "Point". A "Point" has a x value and a y value.*/
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(){
    x = 10;
    y = 10;
}
Point::Point(double x, double y){
    setX(x);
    setY(y);
}
Point::~Point(){
}
void Point::setX(double x){
    this->x = x;
}
void Point::setY(double y){
    this->y = y;
}
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
void Point::PrintPoint() const{
    cout << "(" << getX() << " , " << getY() << ")" << endl;
}
