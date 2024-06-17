// C++ CLASSES AND OBJECTS:

/* C++ IS AN OBJECT-ORIENTED PROGRAMMING LANGUAGE.

EVERYTHING IN C++ IS ASSOCIATED WITH CLASSES AND OBJECTS, ALONG WITH ITS ATTRIBUTES AND ETHODS.
FOR EXAMPLE : IN REAL LIFE, A CAR IS AN OBJECT. tHE CAR HAS ATTRIBUTES, SUCH AS WEIGHT AND COLOR, AND METHOD, SUCH AS DRIVE AND BRAKE.

ATTRIBUTES AND METHODS ARE BASICALLY VARIABLES AND FUNCTIONS THAT BELONGS TO THE CLASS. THESE ARE OFTEN REFERRED TO AS "CLASS MEMEBERS".

A CLASS IS A USER-DEFINED DATA TYPE THAT WE CAN IN OUR PROGRAM, AND IT WORKS AS AN OBJECT CONSRUCTOR, OR A "BLUEPRINT" FOR CREATING OBJECTS.

*/

// create a Car class with some attributes
#include <iostream>
using namespace std;

class Car {
	public :
		string brand;
		string model;
		int year;
};

int main() 
{
	// create an object of car
	Car carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "X5";
	carObj1.year = 1999;

	// create another object of car
	Car carObj2;
	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 1969;

	// Print attribute values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

	return 0;
}
