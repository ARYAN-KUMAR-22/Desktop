// C++ CLASS METHODS

/* CLASS METHODS

METHODS ARE FUNCTIONS THAT BELONGS TO THE CLASS.

THERE ARE TWO WAYS TO DEFINE FUNCTIONS THAT BELONGS TO A CLASS:
	-> INSIDE CLASS DEFINITION
	-> OUTSIDE CLASS DEFINITION

IN THE FOLLOWING EXAMPLE, WE DEFINE A FUNCTION INSIDE THE CLASS, AND WE NAME IT "myMethod".


NOTE : YOU ACCESS METHODS JUST LIKE YOU ACCESS ATTRIBUTES; BY CREATING OBJECT OF THE CLASS AND USING THE DOT SYNTAX (.)

*/

#include <iostream>
using namespace std;

class MyClass 
{
	public:
		void myMethod()
		{
			cout << "Hello World!";
		}
};

int main()
{
	MyClass myObj;		// Create an object of MyClass
	myObj.myMethod();	// Call the method

	return 0;
}

