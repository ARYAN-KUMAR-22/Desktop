#include <iostream>
using namespace std;

int main()
{
	// C++ BREAK AND CONTINUE

	for( int i = 0; i<10; i++)
	{
		if ( i == 4 )
		{
			break;
		}
		cout << i << "\n";
	}
cout << "\n\n";
	for( int i = 0; i < 10; i++ )
	{
		if(i ==4)
		{
			continue;
		}
		cout << i << "\n";
	}

	return 0;
}
