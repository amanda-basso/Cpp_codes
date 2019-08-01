/* This code shows how to open, read, write and close files.*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data [100], dados[100];
    
    //Opens a file in write mode
    ofstream outfile;
    outfile.open("arquivo.txt");

    cout << "Writing in the file" << endl;
    cout << "Write a sentence: ";
    cin.getline(data, 100);

    //Writes the data provided by the user in the file
    outfile << data << endl;

    //Closes the file that was opened
    outfile.close();

    /*Opening a file, writing informations and closing it end here
    The code belows reads the informations and prints them*/
    
    //Opens a file in read mode
    ifstream infile;
    infile.open("file.txt");

    cout << "Informations in the file:" << endl;
    infile >> dados;

    //Prints the data
    cout << dados << endl;

    //Closes the file
    infile.close();

    return 0;
}
