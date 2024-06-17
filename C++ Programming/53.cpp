/* 

	TO DEFINE A FUNCTION OUTSIDE THE CLASS DEFINITION, YOU HAVE TO DECLARE IT INSIDE THE CLASS AND THEN DEFINE IT OUTSIDE OF THE CLASS.
	THIS ID DONE BY SPECIFYING THE NAME OF THE CLASS, FOLLOWED THE SCOPE RESOLUTION :: OPERATOR, FOLLOWED BY THE NAME OF THE FUNCTION.

*/

#include <iostream>
using namespace std;

class MyClass 
{
	public : 
		void myMethod();
};

// Method/function definition outside the class

void MyClass::myMethod()
{
	cout << "Hello World!";
}

int main()
{
	MyClass myObj;		// Create an object of MyClass
	myObj.myMethod();	// Call the method

	return 0;
}
