#include <iostream>
using namespace std;

int main()
{
	// APPEND
	
	string firstName = "John ";
	string lastName = "Doe";

	string fullName = firstName.append(lastName);

	cout << fullName;

	return 0;
}
