#include <iostream>
using namespace std;

int main()
{
	// CREATING POINTERS
	// A POINTER HOWEVER, IS A VARIABLE THAT STORES THE MEMORY ADDRESS AS ITS VALUE.

	// A POINTER VARIABLE YOU'RE WORKING IS ASSIGNED TO THE POINTER.

	string food = "Pizza"; // A FOOD VARIABLE OF TYPE STRING.
	string* ptr = &food; // A POINTER VARIABLE, WITH THE NAME PTR, THAT STORES THE ADDRESS OF FOOD

	// OUTPUT THE VALUE OF FOOD (PIZZA)
	cout << food << "\n";

	// OUTPUT THE MEMORY ADDRESS OF FOOD
	cout << &food << "\n";

	// OUT THE MOEMORY ADDRESS OF FOOD WITH THE POINTER
	cout << ptr << "\n";

	return 0;
}
