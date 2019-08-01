/*This code shows the main function for the "Fraction" project. It's mainly used for verifying the methods.*/
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction first_fraction(3, 4);
    Fraction second_fraction(2, 3);

    first_fraction.Print();
    (++first_fraction).Print();
    first_fraction.Print();
    first_fraction = first_fraction * 5;
    first_fraction = first_fraction++;
    first_fraction = first_fraction * second_fraction;
    first_fraction.Print();

    return 0;
}
