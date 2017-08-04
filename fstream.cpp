#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName;
	fstream file;
	string input;
	string userString;
	int stringOccurances;
	
	cout << "Enter a file name: ";
	cin >> fileName;
	cin.ignore();
	
	file.open(fileName, ios::in);
	
	if(file)
	{
		cout << "Enter a string for the program to find in the file: ";
		getline(cin, userString);
		
		getline(file, input);
		
		while(file)
		{
			if(userString.compare(input) == 0)
			{
				cout << input << endl;
				stringOccurances++;
			}
			getline(file, input);
		}
		file.close();
		cout << "\nThere are " << stringOccurances << " occurances of the string you searched for.";
	}
	else
		cout << "Error: Cannot open file.\n";
		
	return 0;
}
