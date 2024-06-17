#include <iostream>
using namespace std;

void myFunction(string fname)
{
	cout << fname << "Refsnes\n";
}

int main()
{
	// C++ FUNCTION PARAMETERS

	/* PARAMETERS AND ARGUMENTS

	INFORMATION CAN BE PASSED TO FUNCTIONS AS A PARAMETER. PARAMETERS ACT AS VARIABLES INSIDE THE FUNCTION.

	PARAMETERS ARE SPECIFIED AFTER THE FUNCTION NAME, INSIDE THE PARENTHESES. YOU CAN ADD AS MANY PARAMETERS AS YOU WANT, JUST SEPARATE THEM WITH A COMMA.

	*/

	myFunction("Liam");
	myFunction("Jenny");
	myFunction("Anja");

	return 0;
}
