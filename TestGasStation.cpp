//TestGasStation

#include <iostream>
#include "GasStation.h"
using namespace std;

int pumpMenu(int &);
char repairMenu();

int main()
{
	int choice, numberGallons = 0;
	char repairChoice;
	
	//Header
	cout << "Welcome to the Gas Station" << endl << endl;
	choice = pumpMenu(numberGallons);
	Pump pump1(choice, numberGallons);
	cout << endl << endl;
	repairChoice = repairMenu();
	Repair service(repairChoice);
	GasStation station(&pump1, &service);
	cout << endl << endl;
	station.display();
	
	return 0;
}

int pumpMenu(int &numberGallons)
{
	int choice;
	cout << "Please choose Octane of fuel" << endl << endl;
	cout << "Enter 1 for 87 Octane - Regular @ $2.05/gallon" << endl;
	cout << "Enter 2 for 89 Octane - Midgrade @ $2.39/gallon" << endl;
	cout << "Enter 3 for 93 Octane - Premium @ $2.49/gallon" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	cout << "\nGallons pumped: ";
	cout << "(Enter amount of gallons) ";
	cin >> numberGallons;
	
	return choice;
}

char repairMenu()
{
	char r;
	cout << "We have the following services: " << endl << endl;
	cout << "(O) oil change\t\t$25.00\n";
	cout << "(T) tire rotation\t$22.00\n";
	cout << "(B) battery check\t$15.00\n";
	cout << "(I) brake inspection\t$5.00\n";
	cout << "Choose by entering the corresponding character inside the parenthesis next to the service you want done: ";
	cin >> r;
	return r;
}
