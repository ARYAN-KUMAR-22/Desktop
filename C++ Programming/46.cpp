// C++ FUNCTION : PASS BY REFERENCE

#include <iostream>
using namespace std;

void swapNums( int &x, int &y)
{
	int z = x;
	x = y;
	y = z;
}

int main()
{
	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap : " << "\n";
	cout << firstNum << secondNum << "\n";

	//CALL THE FUNCTION, WHICH WILL CHANGE THE VALUES OF FIRSTNUM AND SECONDNUM

	swapNums(firstNum, secondNum);

	cout << "After swap : " << "\n";
	cout << firstNum << secondNum << "\n";

	return 0;
}
