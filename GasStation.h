//GasStation class
#ifndef GASSTATION_H
#include "Pump.h"
#include "Repair.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class GasStation
{
	private:
		Pump *pump;
		Repair *repair;
		double totalPrice;
		double discount;
		void calcPrice()
		{
			totalPrice = pump->getTotalSale() + repair->getTotalPrice();
			if((pump->getGasType() == "Midgrade" || pump->getGasType() == "Premium") && (repair->getRepairString() == "oil change" || repair->getRepairString() == "tire rotation"))
			{
				cout << fixed << showpoint << setprecision(2);
				totalPrice = (pump->getTotalSale() * 0.92) + repair->getTotalPrice();
				discount = pump->getTotalSale() * 0.08;
				cout << "You are eligible for a discount of 8 cents off of every gallon!" << endl;
				cout << "Your discount of $" << discount << " is being applied to the total." << endl;
			}
		}
	public:
		GasStation(Pump *p, Repair *r)
		{
			pump = p;
			repair = r;
			calcPrice();
		}
		double getTotalPrice() const
		{
			return totalPrice;
		}
		double getDiscount() const
		{
			return discount;
		}
		void display()
		{
			pump->display();
			repair->display();
			cout << "Discounts :$" << discount << endl;
			cout << "Your total for the trip to the gas station is $" << totalPrice << endl;
		}
};
#endif
