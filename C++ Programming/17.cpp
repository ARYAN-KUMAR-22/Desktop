#include <iostream>
using namespace std;

int main()
{
	// C++ CONDITIONS
	// SHORT HAND IF - ELSE (TERNARY OPERATOR)
	
	int time;
	cout << "ENTER TIME : ";
	cin >> time;

	string result = (time < 18) ? "\nGood Day" : "\nGood Evening";
	cout << result;

	return 0;
}
