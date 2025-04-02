//#include "Car.h"
#include <cstdio>
#include <cstring>
#include "SportsCar.h"

int main()
{
	Car myCar(10, "K5", 2);
	SportsCar mySecondCar;


	myCar.whereAmI();
	myCar.changeGear(3);
	myCar.speedUp();
	myCar.display();

	mySecondCar.setTurbo(true);
	mySecondCar.display();
}