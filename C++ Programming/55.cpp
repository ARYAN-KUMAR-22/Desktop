// CONSTRUCTOR PARAMETERS

/*

	CONSTRUCTORS CAN ALSO TAKE PARAMETERS ( JUST LIKE REGULAR FUNCTIONS, WHICH CAN BE USEFUL FOR SETTING INITIAL VALUES FOR ATTRIBUTES.

	THE FOLLOWING CLASS HAVE brand, model AND year ATTRIBUTES AND A CONSTRUCTOR WITH DIFFERENT PARAMETERS.
	INSIDE THE CONSTRUCTOR WE SET THE ATTRIBUTES EQUAL TO THE CONSTRUCTOR PARAMETERS ( brand = x, etc). 
	WHEN WE CALL THE CONSTRUCTOR ( BY CREATING AN OBJECT OF THE CLASS), WE PASS PARAMETERS TO THE CONSTRUCTOR, WHICH WILL SET THE VALUE OF THE CORRESPONDING ATTRIBUTES TO THE SAME.

*/

#include <iostream>
using namespace std;

class Car
{
	public:
		string brand;
		string model;
		int year;
		Car (string x, string y, int z)
		{
			brand = x;
			model = y;
			year = z;
		}
};

int main()
{
	// Create Car objects and call the constructor with different values
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Mustang", 1969);

	// Print values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

	return 0;
}
