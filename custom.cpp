#include "custom.h"
#include <iostream>
using namespace std;

Car regCar()
{
	Car c;
	cout << "Please input the registeration number: ";
	cin >> c.regNum;
	cout << "Please state the purpose of the trip (T, V or C): ";
	cin >> c.inspectType;

	return c;
}

void printCar(const Car& c)
{
	cout << "The car registeration number is: " << c.regNum << endl;
}


int timeWait(const Car array[], int regNum)
{
	for (int i = 0; i < numOfCars; i++)
	{
		if (regNum == array[i].regNum)
		{
			if (array[i].inspectType == 'T')
				return 5;
			else if (array[i].inspectType == 'C')
				return 10;
			else if (array[i].inspectType == 'V')
				return 1;
		}
	}
}

void remove(Car array[])
{
	for (int i = 0; i < numOfCars; i++)
	{
		array[i].regNum = 0;
		array[i].inspectType = ' ';
	}
}
