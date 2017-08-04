#include <string>
#include <iostream>

using namespace std;

class DayOfYear
{
	private:
		int day;
	public:
		static string monthName[12];
		static int daysAtTheEndOfTheMonth[12];
		DayOfYear(int);
		void print();
};

int DayOfYear::daysAtTheEndOfTheMonth[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 340, 334, 365};
string DayOfYear::monthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
									 "November", "December"}; 

DayOfYear::DayOfYear(int day)
{
	this -> day = day;
}

void DayOfYear::print()
{
	int month = 0;
	while(daysAtTheEndOfTheMonth[month] < day)
		month = (month + 1) % 12;
	if(month == 0)
		cout << "January" << day << endl;
	else
		cout << monthName[month] << " " << day - daysAtTheEndOfTheMonth[month - 1] << endl;
}

int main()
{
	int dayEntered;
	
	cout << "Enter a number between 1 and 365 to convert day of the year to a string representing month and day: ";
	cin >> dayEntered;
	
	DayOfYear day(dayEntered);
	
	day.print();
	
	return 0;
}
