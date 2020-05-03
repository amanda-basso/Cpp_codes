/*This code contains the main function of the "Composition" project and it's mainly used to print the objects attributes.*/
#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main()
{
    Point p1(19, 34);
    Point p2;
    Circle circle1;
    Circle circle2(p1, 13);
    Cylinder cylinder1;
    Cylinder cylinder2(circle2, 12);

    p1.PrintPoint();
    p2.PrintPoint();
    circle1.PrintCircle();
    circle2.PrintCircle();
    cylinder1.PrintCylinder();
    cylinder2.PrintCylinder();

    return 0;
}
