// C++ INHERITANCE ACCESS

/*

	ACCESS SPECIFIERS

	THERE ARE THREE SPECIFIERS AVAILABLE IN C++.
	UNTIL NOW, WE HAVE ONLY USED public ( MEMBER OF A CLASS ARE ACCESSIBLE FROM THE OUTSIDE THE CLASS) AND private (MEMBERS CAN ONLY BE ACCESSED WITHIN THE CLASS).
	THE THIRD SPECIFIER, PROTECTED, IS SIMILAR TO PRIVATE, BUT IT CAN ALSO BE ACCESSED IN THE INHERITED CLASS.

*/

#include <iostream>
using namespace std;

// Base class
class Employee
{
	protected: 		// Protected access specifier
		int salary;
};

// Derived class
class Programmer: public Employee
{
	public:
		int bonus;
		void setSalary(int s)
		{
			salary = s;
		}
		int getSalary()
		{
			return salary;
		}
};

int main()
{
	Programmer myObj;
	myObj.setSalary(50000);
	myObj.bonus = 15000;

	cout << "Salary: " << myObj.getSalary() << "\n";
	cout << "Bonus: " << myObj.bonus << "\n";

	return 0;
}
