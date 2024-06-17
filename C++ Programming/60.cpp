// C++ INHERITANCE

/*

	INHERITANCE

	IN C++, IT IS POSSIBLE TO INHERIT ATTRIBUTES AND METHODS FROM ONE CLASS TO ANOTHER. WE GROUP THE "INHERITANCE CONCEPT" INTO TWO CATEGORIES.

		-> DERIVED CLASS (CHILD) : THE CLASS THAT INHERITS FROM ANOTHER CLASS
		-> BASE CLASS (PARENT) : THE CLASS BEING INHERITED FROM

	TO INHERIT A CLASS, USE THE : SYMBOL

	IN THE EXAMPLE BELOW, THE Car CLASS (CHILD) INHEIRTS THE ATTRIBUTE AND METHODS FROM THE VEHICLE CLASS (PARENT).


	WHY AND WHEN TO USE "INHERITANCE"?
	
	IT IS USEFUL FOR CODE REUSABILITY. REUSE ATTRIBUUTES AND METHODS OF AN EXISTING CLASS WHEN YOU CREATE A NEW CLASS.
*/

#include <iostream>
using namespace std;

// Base class
class Vehicle
{
	public:
		string brand = "Ford";
		void honk()
		{
			cout << "Tuut, tuut! \n";
		}
};


// Derived class
class Car: public Vehicle{
	public:
		string model = "Mustang";
};

int main()
{
	Car myCar;
	myCar.honk();

	cout << myCar.brand + " " + myCar.model;

	return 0;
}
