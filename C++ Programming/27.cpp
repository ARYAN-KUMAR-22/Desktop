#include <iostream>
using namespace std;

int main()
{
	// C++ MULTI-DIMENSIONAL ARRAYS
	
	/* A MULTI-DIMENSIONAL ARRAY IS AN ARRAY OF ARRAYS.
		
	TO DECLARE A MULTI-DIMENSIONAL ARRAY, DEFINE THE VARIABLE TYPE, SPECIFY THE NAME OF THE ARRAY FOLLOWED BY SQUARE BRACKETS WHICH SPECIFY HOW MANY ELEMENTS THE MAIN ARRAY HAS, FOLLOWED BY ANOTHER SET OF SQUARE BRACKETS WHICH INDICATES HOW MANY ELEMENTS THE SUB-ARRAYS HAVE.

	STRING LETTERS[2][4];

	AS WITH ORDIARY ARRAYS, YOU CAN INSERT VALUES WITH AN ARRAY LITERAL - A COMMA-SEPERATED LIST INSIDE CURLY BRACES. IN A MULTI DIMENSIONAL ARRAY, EACH ELEMENT IN AN ARRAY LITERAL IS ANOTHER ARRAY LITERAL.
	*/

	
	string letters[2][4] = {
	{ "A", "B", "C", "D" },
	{ "E", "F", "G", "H" }
	};

	/*
	EACH SET OF SQUARE BRACKETS IN AN ARRAY DECLARATION ADDS ANOTHER DIMENSION TO AN ARRAY. AN ARRAY LIKE THE ONE ABOVE IS SAID TO HAVE TWO DIMENSIONS.

	ARRAYS CAN HAVE ANY NUMBER OF DIMENSIONS. THE MORE DIMENSIONS AN ARRAY HAS , THE MORE COMPLEX THE CODE BECOMES. THE FOLLOWING ARRAY HAS THREE DIMENSIONS.

	*/
/*
	string letters[2][2][2] =
	{
	{
		{"A", "B"},
		{"C", "D"}
	}
	{
		{"E", "F"},
		{"G", "H"}
	}
	};
*/
	// ACCESS THE ELEMENTS OF A MULTI-DIMENSIONAL ARRAY
	
	/*
	TO ACCESS AN ELEMENT OF A MULTI-DIMENSIONAL ARRAY, SPECIFY AN INDEX NUMBER IN EACH OF THE ARRAY'S DIMENSIONS.

	THIS STATEMENT ACCESSES THE VALUE OF THE ELEMENT IN THE FIRST ROW (0) AND THIRD COLOUN (2) OF THE LETTERS ONLY.
	*/

	cout << letters[0][2];

	return 0;
}
