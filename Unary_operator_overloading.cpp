/* This code shows an example of an unary operator overload. 
The code uses a class to represent the x and y values of a coordinate. It was used the -- operator.*/
#include <iostream>

using namespace std;

class Coordinate{
public:
    Coordinate(){
        x = 15;
        y = 20;
    }
    Coordinate(int x, int y){
        setX(x);
        setY(y);
    }
    ~Coordinate(){
    }
    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    // That's where operator overload occurs. We want that the x and y values decrease simultaneously when -- operator is used.
    Coordinate &operator--(){
        --x;
        --y;
        return *this;
    }
    void print(){
        cout << "The new value of x = " << getX() << " and the new value of y = " << getY() << endl;
    }
private:
    int x;
    int y;
};

int main()
{
    // Examples to test the operator overload. Note that the non-initialized classe will acquire the default values.
    Coordinate coord1(12, 14);
    Coordinate coord2;

    cout << "Coordinate 1: " << endl;
    coord1.print();
    
    cout << "Coordinate 2: " << endl;
    coord2.print();

    cout << "New coordinate 1: " << endl;
    //We can visualize the results of the operator overloading
    (--coord1).print();

    coord2 = --coord1;
    cout << "New coordinate 2: " << endl;
    coord2.print();

    return 0;
}
