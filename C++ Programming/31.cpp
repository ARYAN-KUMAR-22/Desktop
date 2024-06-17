#include <iostream>
using namespace std;

int main()
{
	// ONE STRUCTURE IN MULTIPLE VARIABLE
	struct {
		string brand;
		string model;
		int year;
	} myCar1, myCar2; // WE CAN ADD VARIABLES BY SEPARATING THEM WITH A COMMA HERE

	// PUT DATA INTO THE FIRST STRUCTURE
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1999;

	// PUT DATA INTO THE SECOND STRUCTURE
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;

	// PRINT THE STRUCTURE MEMBERS
	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";



	return 0;
}
