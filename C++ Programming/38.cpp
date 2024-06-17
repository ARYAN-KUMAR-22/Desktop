#include <iostream>
using namespace std;

int main()
{
	// MODIFY THE POINTER VALUE
	// YOU CAN ALSO CHANGE THE POINTER'S VALUE. BUT NOTE THAT THIS WILL ALSO CHANGE THE VALUE OF THE ORIGINAL VARIABLE.

	string food = "Pizza";
	string *ptr = &food;

	// OUTPUT THE VALUE OF FOOD
	cout << food << "\n";

	// OUTPUT THE MEMORY ADDRESS OF FOOD
	cout << &food << "\n";

	// ACCESS THE MEMORY ADDRESS OF FOOD AND OUTPUT ITS VALUE
	cout << *ptr << "\n";

	// CHANGE THE VALUE OF THE POINTER
	*ptr = "Hamburger";

	// OUTPUT HE NEW VALUE OF THE POINTER 
	cout << *ptr << "\n";

	// OUTPUT THE NEW VALUE OF THE FOOD VARIABLE
	cout << food << "\n";

	return 0;
}
