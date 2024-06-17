#include <iostream>
using namespace std;

// NAMED STRUCTURES

// DECLARE STRUCTURE NAMED "CAR"
struct car{
	string brand;
	string model;
	int year;
};

int main()
{
	// CREATE A CAR STRUCTURE AND STORE IT IN myCar1;
	car myCar1;
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1995;

	// CREATE ANOTHER CAR STRUCTURE AND STORE IT IN myCar2;
	car myCar2;
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;

	// PRINT THE STRUCTURE MEMBERS
	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

return 0;
}
