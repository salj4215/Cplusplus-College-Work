//Currency convertor

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//set constants for currency rates
	const double YEN_PER_DOLLAR = 103.43;
	const double EUROS_PER_DOLLAR = 0.90;
	const double POUNDS_PER_DOLLAR = 0.76;
	
	//declare variables
	float userDollars, amountInYen, amountInEuros, amountInPounds;
	
	//ask for user input
	cout << "Enter amount of US dollars to convert: ";
	//assign user input
	cin >> userDollars;

	//convert currency
	amountInYen = userDollars * YEN_PER_DOLLAR;
	amountInEuros = userDollars * EUROS_PER_DOLLAR;
	amountInPounds = userDollars * POUNDS_PER_DOLLAR;
	
	//formatted output
	cout << "Dollars to Yen:      " << setprecision(2) << fixed << showpoint << setw(10) << amountInYen << endl;
	cout << "Dollars to Euros:    " << setprecision(2) << fixed << showpoint << setw(10) << amountInEuros << endl;
	cout << "Dollars to Pounds:   " << setprecision(2) << fixed << showpoint << setw(10) <<amountInPounds << endl;
	return 0;	
}
