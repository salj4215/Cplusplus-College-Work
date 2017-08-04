//Quiz 2 Pump
#ifndef PUMP_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Pump
{
	private:
		int gasTypeInt;
		string gasTypeString;
		double numGallons, gallonPrice, totalSale;
		double calcPrice()
		{
			double ts;
			ts = numGallons * gallonPrice;
			return ts;
		}
	public:
		Pump()
		{
			gasTypeString = "Regular";
			numGallons = 10;
			gallonPrice = 2.05;
			totalSale = calcPrice();
		}
		Pump(int gT, double numG)
		{
			numGallons = numG;
			gasTypeInt = gT;
			if(gasTypeInt == 1)
			{
				gasTypeString = "Regular";
				gallonPrice = 2.05;
			}
			else if(gasTypeInt == 2)
			{
				gasTypeString = "Midgrade";
				gallonPrice = 2.39;
			}
			else
			{
				gasTypeString = "Premium";
				gallonPrice = 2.49;
			}
			totalSale = calcPrice();
		}
		string getGasType() const
		{
			return gasTypeString;
		}
		double getNumberGallons() const
		{
			return numGallons;
		}
		double getGallonPrice() const
		{
			return gallonPrice;
		}
		double getTotalSale() const
		{
			return totalSale;
		}
		void display()
		{
			cout << fixed << showpoint << setprecision(2);
			cout << "Gas Type: " << gasTypeString << endl;
			cout << "Price per gallon: $" << gallonPrice << endl;
			cout << "Gallons Purchased: " << numGallons << endl;
			cout << "Fuel Sale: $" << totalSale << endl;
		}
};
#endif
