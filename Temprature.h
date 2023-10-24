#ifndef Lab4Temp_h
#define Temperature_h
#include <iostream>
#include <string>

using namespace std;

class Temp
{
public:
	Temp();
	~Temp();
	
	void TemperatureChart();

	void settemp(int temp_);


private:

	int count;
	int temp;

};

#endif Lab4Temp.h
