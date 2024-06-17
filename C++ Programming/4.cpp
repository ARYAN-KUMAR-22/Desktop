#include <iostream>
using namespace std;

int main()
{
	// ARITHMETIC OPERATOR

	int sum1 = 100 + 50; // 150 ( 100 + 50)
	int sum2 = sum1 + 250; // 400 ( 150 + 250)
	int sum3 = sum2 + sum2; // 800 ( 400 + 400 )

	cout <<sum1<<"\n" <<sum2<<"\n" << sum3<<"\n";

	/*
		+	ADDITION 
		_	SUBSTRACTION
		*	MULTIPLICATION
		/ 	DIVISION
		%	MODULUS
		++	INNCREMENT
		--	DECREMENT
	
	*/

	// ASSIGNMENT OPERATOR

	int x = 10;
	x+=5;

	cout <<x<<"\n";
	

	/*

	OPEARATOR	EXAMPLE	SAME AS 

	=		x=5	x = 5
	+=		x+=5	x = x + 5
	-=		x-=3	x = x - 3
	*= 		c*=3	x = x * 3
	/=		c/=3	x = x/3
	%=
	&=
	|=
	^=
	>>=
	<<=

	*/


	// COMPARISON OPERATOR

	 x = 5;
	int y = 3;

	cout << (x>y); // RETURNS 1 (TRUE) BECAUSE 5 IS GREATER THAN 3.

	/* SOME MORE OPERATORS ARE  : 
		==
		!=
		>
		<
		>=
		<=
	*/

	//LOGICAL OPERATORS
	/*
		&&
		||
		!
	*/


	return 0;
}
