

#include <iostream>

using namespace std;

double getMedian(int *);

int main()
{
	const int SIZE = 7;
	int numbers[SIZE];
	int count;
	double median;
	
	cout << "Enter " << SIZE << " numbers:" << endl;
	for(count = 0; count < SIZE; count++)
		cin >> *(numbers + count);
	
	median = getMedian(numbers);
	
	cout << "The median of the numbers you entered is " << median;
	
	return 0;
}

double getMedian(int *arr)
{
	double median;
	
	median = *(arr + 3);
	
	return median;
}
