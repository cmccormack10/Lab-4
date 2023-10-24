#include "Temprature.h"
#include <fstream>
#include <iomanip>

// Constructor for the 'Temp' class.
Temp::Temp()
{
	temp = 0;
	count = 0;
};
// Postcondition: Initializes 'temp' to 0 and 'count' to 0.

// Destructor for the 'Temp' class.
Temp::~Temp() {};

// Set function for 'temp' variable.
// Makes "Temp_" an integer that represents a temp value
void Temp::settemp(int temp_)
{
	temp = temp_;
};
// Postcondition: Sets the 'temp' member variable to the value of 'temp_'.

// Function to generate a temperature chart.
// Precondition: 'temp' represents a valid temperature value.
void Temp::TemperatureChart()
{
	// Check if the temperature is outside the valid range (-30 to 120).
	if (temp < -30 || temp > 120)
	{
		cout << "ERROR: Temperature is not in the given range!" << endl;
	}

	// Check if the temperature is within the valid range (-30 to 120).
	if (temp >= -30 && temp <= 120)
	{
		cout << left << setw(5);
		cout << temp << ": ";

		// Print * to represent the temperature for every 3 degrees.
		while (((temp + 30) / 3) > count) {
			cout << "*";
			count++;
		}
		cout << "" << endl;

		count = 0;  // Reset the count for next temp.
	}
};
// Postcondition: Prints a temperature chart to the user, uses *'s to represent the data