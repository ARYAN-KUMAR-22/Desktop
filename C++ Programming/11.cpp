#include <iostream>
using namespace std;

int main()
{
	// USER INPUT STRINGS
	// IT IS POSSIBLE TO USE THE EXTRACTION OPERATOR >> ON cin TO STORE A STRING ENTERED BY A USER.
	
	string firstName;
	cout << "TYPE YOUR FIRST NAME : ";
	cin >> firstName; //GET USER INPUT FROM THE KEYBOARD;
	cout << "YOUR NAME IS : "<< firstName;

	return 0;
}
