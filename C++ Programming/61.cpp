// C++ MULTILEVEL INHERITANCE

/*

	MULTILEVEL INHERITANCE

	A CLASS CAN ALSO BE DERIVED FROM ONE CLASS, WHICH IS ALREADY DERIVED FROM ANOTHER CLASS.

	IN THE FOLLOWING EXAMPLE, MyGrandChild IS DERIVED FROM CLASS MyChild (WHICH IS DERIVED FROM MyClass ).
*/

#include <iostream>
using namespace std;

// Base class (parent)
class MyClass
{
	public:
		void myFunction()
		{
			cout << "Some content in parent class.";
		}
};

// Derived class (child)
class MyChild : public MyClass{
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main()
{
	MyGrandChild myObj;
	myObj.myFunction();

	return 0;
}
