#include "Complex.h"
//#include "Car.h"

int main()
{
	Complex a, b, c;
	a.read(" A = ");
	b.read(" B = ");
	c.add(a, b);
	a.print("A = ");
	b.print("B = ");
	c.print("A+B = ");

	//Car myCar;

	//myCar.whereAmI();
	//myCar.changeGear(3);
	//myCar.speedUp();
}

