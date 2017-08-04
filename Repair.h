//Repair Class
#ifndef REPAIR_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Repair
{
	private:
		char repairChar;
		string repairString;
		double totalPrice;
	public:
		Repair()
		{
			repairChar = 'O';
			repairString = "oil change";
			totalPrice = 25.00;
		}
		Repair(char c)
		{
			switch(c)
			{
				case 'O' : case 'o' :
					repairString = "oil change";
					totalPrice = 25.00;
					break;
				case 'T' : case 't' :
					repairString = "tire rotation";
					totalPrice = 22.00;
					break;
				case 'B' : case 'b' :
					repairString = "battery check";
					totalPrice = 15.00;
					break;
				case 'I' : case 'i' :
					repairString = "brake inspection";
					totalPrice = 5.00;
					break;
				default :
					repairString = "oil change";
					totalPrice = 25.00;
					cout << "No choice entered, defaulted to oil change" << endl;
			}
		}
		char getRepairChar() const
		{
			return repairChar;
		}
		string getRepairString() const
		{
			return repairString;
		}
		double getTotalPrice() const
		{
			return totalPrice;
		}
		void display()
		{
			cout << fixed << showpoint << setprecision(2);
			cout << "You have selected " << repairString << "." << endl;
			cout << "The total price for this service is $" << totalPrice << endl;
		}
};
#endif
