// CONSTRUCTORS

/*

	A CONSTRUCTOR IN C++ IS A SPECIAL METHOD THAT IS AUTOMATICALLY CALLED WHEN AN OBJECT OF A CLASS IS CREATED.

	TO CREATE A CONSTRUCTOR, USE THE SAME NAME AS THE CLASS, FOLLOWED BY PARENTHESES ().

*/

#include <iostream>
using namespace std;

class MyClass			// The class
{	
	public:			// Access specifier
		MyClass()	// Constructor
		{
			cout << "Hello World ! ";
		}
};

int main()
{
	MyClass myObj;		// Create an object of MyClass ( this will call the constructor )

	return 0;
}
