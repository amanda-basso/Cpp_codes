#ifndef POINT_H
#define POINT_H

class Point{
public:
    Point();
    Point(double x, double y);
    ~Point();
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void PrintPoint() const;
private:
    double x;
    double y;
};

#endif // POINT_H
