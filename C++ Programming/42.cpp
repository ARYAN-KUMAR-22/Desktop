// WE CAN ALSO USE A DEFAULT PARAMETER VALUE, BY USING THE EQUALS SIGN (=).

#include <iostream>
using namespace std;

void myFunction(string country = "Norway")
{
	cout << country << "\n";
}

int main()
{
	myFunction("Sweden");
	myFunction("India");
	myFunction();
	myFunction("USA");

	return 0;
}
