/*This file contains the class "Fraction".*/
#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
public:
    Fraction();
    Fraction(double numerator, double denominator);
    void setDen(double denominator);
    void setNum(double numerator);
    double getNum() const;
    double getDen() const;
    double division();
    Fraction multiply(Fraction x);
    Fraction operator++(int ghost);
    Fraction &operator++();
    Fraction operator*(int n);
    Fraction operator*(const Fraction &a);
    void Print() const;
    ~Fraction();
private:
    double numerator;
    double denominator;
};

#endif // FRACTION_H
