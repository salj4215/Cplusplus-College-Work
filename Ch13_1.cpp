//try catch
#include <iostream>
#include "13_1.h"

using namespace std;

int main()
{
	int month;
	int day;
   // Create a Date object and initialize it
   // using the overloaded constructor.
   try
    {
   		Date today(12, 25, 2014);
   		// Show the date in form #1.
   		today.showDate1();
   	}
   	catch (Date::InvalidDay)
   	{
   		cout << "Error: A value outside of the range 1 through 31 was entered for the day";
	}
	catch (Date::InvalidMonth)
	{
		cout << "Error: A value outside of the range 1 through 12 was entered for the month";
	}
   
   // Store a new month, day, and year
   // in the object.
   	Date today;
   	cout << "Please enter a number representing a month >> ";
   	cin >> month;
   	cout << "Please enter a number for the day >> ";
   	cin >> day;
   	
   try
   {
   	today.setMonth(month);
   	today.setDay(day);
   	today.setYear(2012);
   
   // Show the date in form #2.
   today.showDate2();
   
   // Show the date in form #3.
   today.showDate3();
   }
   catch (Date::InvalidDay)
   	{
   		cout << "Error: A value outside of the range 1 through 31 was entered for the day";
	}
	catch (Date::InvalidMonth)
	{
		cout << "Error: A value outside of the range 1 through 12 was entered for the month";
	}
	
   return 0;
}
