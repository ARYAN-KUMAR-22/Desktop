#include <iostream>
using namespace std;

int main()
{
	try{
		int age = 15;
		if (age >= 18){
			cout << "Access granted - you are old enough.";
		}else{
			throw ( age);
		}
	}
	catch ( int myNum){
		cout << "Access denied - You must be at least 18 years old. \n";
		cout << "Age is : " << myNum;
	}

	return 0;
}


/*

	EXAMPLE EXPLAINED :
	
	WE USE THE TRY BLOCK TO TEST SOME CODE : IF THE AGE VARIABLE IS LESS THAN 18, WE WILL THROW AN EXCEPTION, AND HANDLE IT IN OUR CATCH BLOCK.

	INT THE CATCH BLOCK, WE CATCH THE ERROR AND DO SOMETHING ABOUT IT. 
	THE CATCH STATEMENT TAKES A PARAMETER. IN OUR EXAMPLE WE USE AN INT VARIABLE (MYNUM) (BECAUSE WE ARE THROWING AN EXCEPTION OF INT TYPE IN THE TRY BLOCK (AGE) ), TO OUTPUT THE VALUE OF AGE.

	IF NO ERROR OCCURS (e.g. IF AGE IS 20 INSTEAD OF 15, MEANING IT WILL BE GREATER THAN 18), THE CATCH BLOCK IS SKIPPED.
*/
