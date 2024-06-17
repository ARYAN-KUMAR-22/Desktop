// READ A FILE

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile("filename.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline(MyReadFile, myText))
	{
		cout << myText; // Output the text from the file
	}
		
	// Close the file
	MyReadFile.close();

	return 0;
}
