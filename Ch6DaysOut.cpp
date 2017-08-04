// Chapter 6, Programming Challenge 13: Days Out

#include <iostream>

using namespace std;

// Function prototypes
int getEmployees();
int getDaysOut(int);
double calcAverage(int, int);

int main()
{
	int employees; //To hold the number of employees
	int daysOut; //To hold the number of days missed
	double average; //To hold the average days missed
	
	// Get the number of employees
	employees = getEmployees();
	
	//Get the number of days missed by all employees
	daysOut = getDaysOut(employees);
	
	//Get the average number of days missed
	average = calcAverage(employees, daysOut);
	
	//Display the average
	cout << "\nThe average number of days missed was " << average << ".\n\n";
	
	return 0;
}

int getEmployees()
{
	int emp;
	
	cout << "Please enter number of employees: ";
	cin >> emp;
	while (emp < 1)
	{
		cout << "Number of employees cannot be less than one." << endl;
		cout << "Please enter number of employees: ";
		cin >> emp;
	}
	
	return emp;
}

int getDaysOut(int e)
{
	int x = 1;
	int days = 0;
	int totDays = 0;
	int emp = 0;
	while (emp < e)
	{
		cout << "Please enter number of days employee " << x << " missed during the past year: ";
		cin >> days;
		while (days < 0)
		{
			cout << "Numbers of days missed cannot be negative." << endl;
			cout << "Please enter number of days employee " << x << " missed during the past year";
			cin >> days;
		}
		emp++;
		totDays = totDays + days;
		x++;
	}
	
	return totDays;
}

double calcAverage(int e, int d)
{
	double avg = static_cast<double>(d) / e;
	return avg; 
}
