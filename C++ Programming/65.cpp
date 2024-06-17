// C++ FILES

/*

	C++ FILES

	THE fstream LIBRARY ALLOWS US TO WORK WITH FILES.

	TO USE THE fstream LIBRARY, INCLUDE BOTH THE <iostream> AND THE <fstream> HEADER FILE.

	#include <iostream>
	#include <fstream>
	
	THERE ARE THREE CLASSES INCLUDED IN THE fstream LIBRARY, WHICH ARE USED TO CREATE, WRITE OR READ FILES.

	-> ofstream : CREATES AND WRITES TO FILES
	-> ifstream : READS FROM FILES
	-> fstream : A COMBINATION OF OFSTREAM AND IFSTREAM. CREATES, READS, AND WRITES TO FILES

	READ A FILE : 
	TO READ FROM A FILE, USE EITHER THE ifstream or fstream CLASS AND THE NAME OF THE FILE.

	NOTE THAT WE ALSO USE A while LOOP TOGETHER WITH THE getline() FUNCTION ( WHICH BELONGS TO THE ifstream CLASS) TO READ THE FILE LINE BY LINE, AND TO PRINT THE CONTENT OF THE FILE.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Create and open a text file
	ofstream MyFile("filename.txt");

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enought!";

	// Close the file
	MyFile.close();

	return 0;
}

