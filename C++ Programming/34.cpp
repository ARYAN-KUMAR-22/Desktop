#include <iostream>
using namespace std;

int main()
{
	// CREATING REFERECNCES
	
	// A REFERENCE VARIABLE IS A "REFERENCE" TO AN EXISTING VARIABLE, AND IT IS CREATED WITH THE & OPERATOR.

	string food = "Pizza"; // FOOD VARIABLE
	string &meal = food; // REFERENCE TO FOOD

	cout << food << "\n"; // OUTPUTS PIZZA
	cout << meal << "\n"; // OUTPUTS PIZZA


	return 0;
}
