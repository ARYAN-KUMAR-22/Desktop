// C++ USER INPUT 

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "TYPE A NUMBER : "; // TYPE A NUMBER AND PRESS ENTER
	cin >> x; // GET USER INPUT FROM THE KEYBOARD
	cout << "YOUR NUMBER IS : " <<x; // DISPLAY THE INPUT VALUE

	if( x % 2  == 0)
		printf("\nTHE NUMBER IS EVEN.");
	else
		printf("\nTHE NUMBER IS ODD.");

	return 0;
}
