#include <iostream>
using namespace std;

int main()
{
	// C++ OMIT ARRAY SIZE

	// IN C++, YOU DON'T HAVE TO SPECIFY THE SIZE OF THE ARRAY. THE COMPILER IS SMART ENOUGH TO DETERMINE THE SIZE OF THE ARRAY BASED ON THE NUMBER OF INSERTED VALUES.

	string cars[] = {"Volvo", "BMW", "Ford"}; // THREE ARRAY ELEMENTS

	cout << cars[0];

	// OMIT ELEMENTS ON DECLARATION
	// IT IS ALSO POSSIBLE TO DECLARE AN ARRAY WITHOUT SPECIFYING THE ELEMENTS ON DECLARATION AND ADD THEM LATER.

	string car[5];
	car[0] = "Volvo";
	car[1] = "BMW";


	return 0;
}