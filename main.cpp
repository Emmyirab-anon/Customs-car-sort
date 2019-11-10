#include <iostream>
#include "custom.h"
using namespace std;


int main()
{
	Car carArray[numOfCars];
	int regNumb;
	char inspect;
	for (int i = 0; i < numOfCars; i++)
	{
		carArray[i] = regCar();
		cout << endl;
	}

	cout << endl;
	cout << "Cars with tourist inspection type: " << endl;
	for (int i = 0; i < numOfCars; i++)
	{
		if (carArray[i].inspectType == 'T')
		{
			cout << "Car number: " << i << "   ";
			printCar(carArray[i]);
		}
	}
	cout << endl;
	cout << "Cars with commercial inspection type: " << endl;
	for (int i = 0; i < numOfCars; i++)
	{
		if (carArray[i].inspectType == 'C')
		{
			cout << "Car number: " << i << "   ";
			printCar(carArray[i]);
		}
	}
	cout << endl;
	cout << "Cars with VIP inspection type: " << endl;
	for (int i = 0; i < numOfCars; i++)
	{
		if (carArray[i].inspectType == 'V')
		{
			cout << "Car number: " << i << "   ";
			printCar(carArray[i]);
		}
	}


	cout << endl;
	cout << endl;
	for (int i = 0; i < numOfCars; i++)
	{
		cout << "Please input a registeration number to check the inspection type: ";
		cin >> regNumb;

		cout << "Your time to wait is: " << timeWait(carArray, regNumb) << " minutes" << endl;

	}

	remove(carArray);



	return 0;
}
