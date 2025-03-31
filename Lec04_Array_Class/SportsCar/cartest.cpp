#include "Car.h"
#include <cstdio>
#include <cstring>

int main()
{
	Car myCar(10, "K5", 2);

	myCar.whereAmI();
	myCar.changeGear(3);
	myCar.speedUp();
	myCar.display();
}