#include <iostream>
using namespace std;

int main()
{
	// ACCESS STRING 
	// YOU CAN ACCESS THE CHARACTERS IN A STRING BY REFERRIG TO ITS INDEX NUMBER INSIDE SQUARE BRACKETS [].

	string myString = "Hello";
	cout << myString[0]<<'\n';

	// OUTPUT WILL BE H
	
	// TO CHANGE THE VALUE OF A SPECIFIC CHARACTER IN A STRING, REFER TO THE INDEX NUMBER, AND USE SINGLE QUOTES.
	
	myString[0] = 'J';

	cout << myString; // THE OUTPUT WILL BE Jello
	return 0;
}
