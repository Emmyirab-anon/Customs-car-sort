const unsigned int numOfCars = 5;
struct Car
{
	int regNum;
	char inspectType;
};

Car regCar();
void printCar(const Car& c);
int timeWait(const Car array[], int regNum);
void remove(Car array[]);