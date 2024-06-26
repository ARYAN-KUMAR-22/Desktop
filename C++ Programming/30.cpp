#include <iostream>
using namespace std;

int main()
{
	// C++ STRUCTURES (struct)

	/* 
	STRUCTURES (ALSO CALLED STRUCTS) ARE A WAY TO GROUP SEVERAL RELATED VARIABLES INTO ONE PLACE. EACH VARIABLE IN THE STRUCTURE IS KNOWN AS A MEMBER OF THE STRUCTURE.

	UNLIKE AN ARRAY, A STRUCTURE CAN CONTAIN MANY DIFFERENT DATA TYPES (INT, STRING, BOOL, ETC.)

	CREATE AN STRUCTURE : 
	
	TO CREATE A STRUCTURE, USE THE struct KEYWORD AND DECLARE EACH OF ITS MEMBERS INSIDE CURLY BRACES.

	AFTER THE DECLARATION, SPECIFY THE NAME OF THE STRUCTURE VARIABLE (mystructure IN THE EXAMPLE BELOW).

	*/
	struct {			// STRUCTURE DECLARATION
		int myNum;		// MEMBER (INT VARIABLE)
		string myString;	// MEMBER (STRING VARIABLE)
	} myStructure;			// STRUCTURE VARIABLE

	// ACCESS STRUCTURE MEMBERS

	// TO ACCESS MEMBERS OF A STRUCTURE, USE THE DOT SYNTAC (.)

	// ASSIGN VALUES TO MEMBERS OF myStructure

	myStructure.myNum = 1;
	myStructure.myString = "Hello World!";

	// PRINT MEMBERS OF myStructure
	
	cout << myStructure.myNum << "\n";
	cout << myStructure.myString << "\n";

	return 0;
}
