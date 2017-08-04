// Chapter 7, Programming Challenge 7: Number Analysis Program
#include <iostream>
#include <fstream>
using namespace std;

// Global constant for the array size
const int ARRAY_SIZE = 12;

// Function prototypes
void readNumbers(ifstream &, int [], int);
int getLowest(int [], int);
int getHighest(int [], int);
int getSum(int [], int);
double getAverage(int [], int);

int main()
{
	int lowestNum;
	int highestNum;
	int sum;
	double avg;
    // File stream object
    ifstream inFile;
   
    // Array to hold the numbers
    int numbers[ARRAY_SIZE];

    // Open the file.
    inFile.open("numbers.txt");
   
    // Test for errors.
    if (!inFile)
    {
        cout << "Error opening the file.\n";
        return 0;
    }

    // Read the numbers into the array.
    readNumbers(inFile, numbers, ARRAY_SIZE);

    // Close the file.
    inFile.close();
    
    lowestNum = getLowest(numbers, ARRAY_SIZE);
    
    highestNum = getHighest(numbers, ARRAY_SIZE);
    
    sum = getSum(numbers, ARRAY_SIZE);
    
    avg = getAverage(numbers, ARRAY_SIZE);
    
    cout << "The lowest number is " << lowestNum << endl;
    
    cout << "The highest number is" << highestNum << endl;
    
    cout << "The sum of the numbers is " << sum << endl;
    
    cout << "The average of the numbers is " << avg << endl;
    
}

void readNumbers(ifstream &file, int num[], int s)
{
	for(int i = 0; i < s; i++)
		file >> num[i];
}

int getLowest(int num[], int s)
{
	int lowest;
	lowest = num[0];
	for(int count = 1; count < s; count++)
	{
		if(num[count] < lowest)
			lowest = num[count];
	}
	
	return lowest;
}

int getHighest(int num[], int s)
{
	int highest;
	highest = num[0];
	for(int count = 1; count < s; count++)
	{
		if(num[count] > highest)
			highest = num[count];
	}
	
	return highest;
}

int getSum(int num[], int s)
{
	int total = 0;
	
	for(int count = 0; count < s; count++)
		total += num[count];
		
	return total;
	
}

double getAverage(int num[], int size)
{
	int total = 0;
	double avg;
	
	for(int count = 0; count < size; count++)
		total += num[count];

	avg = total / size;
	
	return avg;
}
