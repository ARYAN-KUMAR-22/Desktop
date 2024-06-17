// RECURSION
// RECURSION IS THE TECHNIQUE OF MAKING A FUNCTION CALL ITSELF. THIS TECHNIQUE PROVIDES A WAY TO BREAK COMPLICATED PROBLEMS DOWN INTO SIMPLE PROBLEMS WHICH ARE EASIER TO SOLVE.

#include <iostream>
using namespace std;

int sum( int k)
{
	if(k>0)
	{
		return k+sum(k-1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int result = sum(10);
	cout << result;

	return 0;
}
