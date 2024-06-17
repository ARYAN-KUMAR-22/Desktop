#include <iostream>
using namespace std;

int main()
{

	// C++ CONDITIONS

	int age;
	cout << "ENTER YOUR AGE : ";
	cin >> age;
	
	if(age <= 18 )
		cout <<"\nYOUR AGE IS LESS THAN 18";
	else if(age >=18 && age <= 25 )
		cout <<"\nYOUR AGE IS BETWEEN 18 AND 22";
	else 
		cout <<"\nYOUR AGE IS ABOVE 22";

	return 0;
}
