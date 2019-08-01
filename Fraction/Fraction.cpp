/*This code shows the methods for the "Fraction" class, including the methods for operator overloading.*/
#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(){
    numerator = 3;
    denominator = 8;
}
Fraction::Fraction(double numerator, double denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}
Fraction::~Fraction(){
}
void Fraction::setDen(double denominator){
    this->denominator = denominator;
}
void Fraction::setNum(double numerator){
    this->numerator = numerator;
}
double Fraction::getNum()const{
    return numerator;
}
double Fraction::getDen()const{
    return denominator;
}
double Fraction::division(){
    double result;
    result = numerator/denominator;
    return result;
}
Fraction Fraction::multiply(Fraction x){
    Fraction reserve;
    reserve.setNum(this->numerator * x.getNum());
    reserve.setDen(this->denominator * x.getDen());
    return reserve;
}
Fraction Fraction::operator*(const Fraction &a){
    Fraction res;
    res.denominator = denominator * a.denominator;
    res.numerator = numerator * a.numerator;
    return res;
}
Fraction Fraction::operator++(int ghost){
    Fraction res = *this;
    numerator = numerator + denominator;
    return res;
}
Fraction & Fraction::operator++(){
    numerator = numerator + denominator;
    return *this;
}
Fraction Fraction::operator*(int n){
    return Fraction(numerator * n, denominator);
}
void Fraction::Print() const{
    cout << getNum() << "/" << getDen() << endl;
}
