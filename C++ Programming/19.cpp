#include <iostream>
using namespace std;

int main()
{
	// C++ WHILE LOOP
	// LOOPS CAN EXECUTE A BLOCK OF CODE AS LONG AS A SPECIFIED CONDITION IS REACHED.

	int n;
	cout << "ENTER A NUMBER : ";
	cin >> n;
	int i = 0;

	while( i<11)
	{
		cout << n <<"X" <<i << "=" <<n*i <<endl;
		i++;
	}

	return 0;
}
