/*

	JUST LIKE FUNCTIONS, CONSTRUCTORS CAN ALSO BE DFINED OUTSIDE THE CLASS. 
	FIRST, DECLARE THE CONSTRUCTOR INSIDE THE CLASS, AND THEN DEFINE IT OUTSIDE OF THE CLASS BY SPECIFYING THE NAME OF THE CLASS, FOLLOWED BY THE SCOPE RESOLUTION :: OPERATOR, FOLLOWED BY THE NAME OF THE CONSTRUCTOR ( WHICH IS THE SAME AS THE CLASS ).

*/

#include <iostream>
using namespace std;

class Car			// The class
{
	public : 		// Access specifier
		string brand;	// Attribute
		string model;	// Attribute
		int year;	// Attribute
		Car (string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class

Car::Car(string x, string y, int z)
{
	brand = x;
	model = y;
	year = z;
}

int main()
{
	// Create Car objects and call the constructor with different values.
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);

	// Print values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

	return 0;
}
