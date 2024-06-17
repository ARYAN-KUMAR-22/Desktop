#include <iostream>
using namespace std;

int main()
{
	// C++ DO - WHILE LOOP

	int n;
	cout << "ENTER THE NUMBER : ";
	cin >> n;
	int i = 1;

	do{
		cout << n <<"X" << i <<"=" << n*i <<"\n";
		i++;
	}while(i<=10);

	return 0;
}
