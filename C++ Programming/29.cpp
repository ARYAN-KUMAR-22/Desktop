#include <iostream>
using namespace std;

int main()
{
	// WHY MULTIDIMENSIONAL ARRAY
	/* 
	MULTI - DIMENSIONAL ARRAYS ARE GREAT AT REPRESENTING GRIDS. THIS EXAMPLE SHOWS A PRACTICAL USE FOR THEM. IN THE FOLLOWING EXAMPLE WE USE A MULTI-DIMENTIONAL ARRAY TO REPRESENT A SMALL GAME OF BATTLESHIP.
	*/

	// WE PUT "1" TO INDICATE THERE IS A SHIP.
	bool ships[4][4] = {
	{ 0, 1, 1, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 1, 0 },
	{ 0, 0, 1, 0 }
	};

	// KEEP TRACK OF HOW MANY HITS THE PLAYER HAS AND HOW MANY TURNS THEY HAVE PLAYED IN THESE VARIABLES.
	int hits = 0;
	int numberofTurns = 0;

	// ALLOW THE PLAYER TO KEEP GOING UNTIL THEY HAVE HIT ALL FOUR SHIPS.
	while ( hits < 4) {
		int row,column;

		cout <<  "Selecting coordinates\n";
		
	//ASK THE PLAYER FOR A ROW
	cout << "Choose a row number between 0 and 3 : ";
	cin >> row;

	// ASK THE PLAYER FOR A COLOUM
	cout << "Choose a column number between 0 and 3: ";
	cin >> column;

	// CHECK IF A SHIP EXIST IN THOSE COORDINATES
	if (ships[row][column]){
		// IF THE PLAYER HIT A SHIP, REMOVE IT BY SETTING THE VALUE TO ZERO.
		ships[row][column] = 0;

		// INCNREASE THE HIT COUNTER
		hits++;

		// TELL THE PLAYER THAT THEY HAVE HIT A SHIP AND HOW MANY SHIPS ARE LEFT
		cout << "Hit! " << (4-hits) << " left.\n\n";
	}else{
		//TELL THE PLAYERR THAT THEY MISSED
		cout << "Miss \n\n";
	}

	// COUNT HOW MANY TURNS THE PLAYER HAS TAKEN
	numberofTurns++;
	}

	cout << "Victory!\n";
	cout << "You won in " << numberofTurns << "turns";
}

