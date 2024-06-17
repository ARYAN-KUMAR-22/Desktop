#include <iostream>
using namespace std;

int main()
{
	// C++ DEREFERENCE
	string food = "Pizza"; // VARIABLE DECLARATION
	string *ptr = &food;
	
	// REFERENCE : OUTPUT THE MEMORY ADDRESS OF FOOD WITH THE POINTER.
	cout << ptr << "\n";

	// DEREFERENCE : OUTPUT THE VALUE OF FOOD WITH THE POINTER (Pizza)
	cout << *ptr << "\n";

	return 0;
}
