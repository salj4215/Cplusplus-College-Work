//Word Counter

#include <iostream>

using namespace std;

int countWords(char *);

int main()
{
	const int SIZE = 51;
	char userString[SIZE];
	int words;
	
	cout << "Enter a string (up to " << SIZE - 1 << " characters): ";
	cin.getline(userString, SIZE);
	
	while(*userString == '\0')
	{
		cout << "Your string contains no words\n\n";
		cout << "Enter a string (up to " << SIZE - 1 << " characters): ";
		cin.getline(userString, SIZE);
	}
	
	words = countWords(userString);
	
	cout << "There are " << words << " word(s) in your string.";
	
	return 0;
}

int countWords(char *strPtr)
{
	int words = 0;
	
	while(*strPtr != '\0')
	{
		if(*strPtr == ' ')
			words++;
		strPtr++;
	}
	
	if(*strPtr == '\0')
		words++;
	
	return words;
}
