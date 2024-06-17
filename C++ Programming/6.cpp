#include <iostream>
using namespace std;

int main()
{
	// STRING CONCATENATION
	
	string firstName = "John";
	string lastName = "Doe";
	string fullName = firstName + lastName;
	
	cout << fullName +'\n' ;

	fullName = firstName + " " + lastName;

	cout << fullName;

	return 0;
}
