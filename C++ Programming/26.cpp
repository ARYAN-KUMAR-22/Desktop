#include <iostream>
using namespace std;

int main()
{
	// C++ ARRAY SIZE
	
	int myNumbers[5] = {10, 20, 30, 40, 50};

	cout << sizeof(myNumbers)<< "\n";
	
	int getArrayLength = sizeof(myNumbers) / sizeof(int);
	cout << getArrayLength;

	return 0;
}
