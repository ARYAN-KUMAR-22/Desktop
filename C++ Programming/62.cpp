// MULTIPLE INHERITANCE

// A CLASS CAN ALSO BE DERIVED FROM MORE THAN ONE BASE CLASS, USING A COMMA-SEPERATED LIST.

#include <iostream>
using namespace std;

// Base class
class MyClass
{
	public:
		void myFunction()
		{
			cout << "Some content in parent class.";
		}
};

// Another base class
class MyOtherClass
{
	public:
		void myOtherFunction()
		{
			cout << "Some content in another class.";
		}
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass
{
};

int main()
{
	MyChildClass myObj;
	myObj.myFunction();
	myObj.myOtherFunction();

	return 0;
}
