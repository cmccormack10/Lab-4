/*
    Chris McCormack 
    C++ Fall 2023 
    Lab 4 - Temperature Output
    Design and write a C++ program that inputs a series of hourly temperature
    from a file, and outputs a bar chart (using stars) of the temperatures. The temperature
    should be printed to the left of the corresponding bar, and there should be a heading
    that gives the scale of the chart. The range of temperatures should be from -30 to 120.
*/

#include "Temprature.h"
// Standard Libraries 
#include <iostream>  
#include <fstream>  

using namespace std;  // Standard Namespace Declaration


int main() {
    int temp;  // Creates the variable temp as an integer
    Temp myTemp; // creates object of myTemp in the class Temp

    // Gives description of what the data means as well as a chart of what the data should read
    cout << "Hourly Temperatures. Each '*' represents 3 degrees Fahrenheit" << endl;
    cout << "Temperature Bar Chart" << endl;
    cout << "-----------------------" << endl;
    cout << "Scale: -30      0         30        60        90       120" << endl;

    // the file stream goes into inFile, it then opens "Tempratures.dat" file
    ifstream inFile;
    inFile.open("Tempratures.dat");

    // Checks if file is able to open
    if (!inFile) {
        cout << "Error opening file";
        return 1111; // leaves with code 1111 if this happens
    }

    // in While loop it sets the variable, as long as there is a variable it then sets the temp and creates a bar chart
    while (inFile >> temp) {
        myTemp.settemp(temp);
        myTemp.TemperatureChart();
    }

    // If there is a string or a float input that isnt an integer, this check tells the reader that the data cannot be read in for this specific piece
    if (!inFile.eof()) {
        cout << "Error reading from the file." << endl;
        return 9999; // leaves with code 9999 if this happens
    }

    // closes the file "Temprature.dat"
    inFile.close();

    // after everything has been read in and the code is on a blank space, it reads this message
    cout << endl << "All data has been read in! " << endl;

    return 0;
}