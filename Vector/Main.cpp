/*This code shows the main function of the "Vector" project and it's main purpose is to test the objects created by "Vector" class.*/
#include "Vector.h"
#include <iostream.h>

using namespace std;

int main()
{
	int OddSize;
   	cout << "The vector with even size will have the default size." << endl;
   	cout << "Enter the size of the odd vector: ";
   	cin >> OddSize;

	vector <int> Even;
	vector <int> Odd(OddSize);

	int i = 0;
    	while(Even.SetValue(i, i * 2))
        	i++;
        
	i=0;
    	while(Odd.SetValue(i, i * 2 + 1))
    		i++;
	
	cout << "Even vector" << endl;
    	Even.Print();
    
    	cout << "Odd vector" << endl;
    	Odd.Print();

    return 0;
}
