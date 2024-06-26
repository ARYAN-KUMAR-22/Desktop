// C++ EXCEPTIONS

/*

	C++ EXCEPTIONS

	WHEN EXECUTING C++ CODE, DIFFERENT ERRORS CAN OCCUR. CODING ERRORS MADE BY THE PROGRAMMER, ERRORS DUE TO WRONG INPUT, OR OTHER UNFORESEEABLE THINGS.

	WHEN AN ERROR OCCURS, C++ WILL NORMALLY STOP AND GENERATE AN ERROR MESSAGE. 
	THE TECHNICAL TERM FOR THIS IS : C++ WILL THROW AN EXCEPTION ( THROW AN ERROR).

	C++ TRY AND CATCH

	EXCEPTION HANDLING IN C++ CONSIST OF THREE KEYWORDS :  try, throw, and catch

	-> THE try STATEMENT ALLOWS YOU TO DEFINE A BLOCK OF CODE TO BE TESTED FOR ERRORS WHILE IT IS BEING EXCECUTED.
	-> THE throw KEYWORD THROWS AN EXCEPTION WHEN A PROBLEM IS DETECTED. WHICH LETS US CREATE A CUSTOM ERROR.
	-> THE catch STATEMENT ALLOWS YOU TO DEFINE A BLOCK OF CODE TO BE EXECUTED. IF AN ERROR OCCURS IN THE TRY BLOCK
	-> THE try AND catch KEYWORDS COME IN PAIRS.

*/

#include <iostream>
using namespace std;

int main()
{
	try{
		//Block of code to try
		throw exception; // Throw an exception when a problem arise
	}
	catch()
	{
		// Block of code to handle errors
	}

	return 0;
}
