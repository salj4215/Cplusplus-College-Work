//TestPump
#include <iostream>
#include "Pump.h"
using namespace std;

int menu(int &);

int main()
{
	int choice, numberGallons = 0;
	Pump pump1;
	choice = menu(numberGallons);
	Pump pump2(choice, numberGallons);
	cout << endl << endl;
	pump1.display();
	cout << endl << endl;
	pump2.display();
	
	return 0;
}

int menu(int &numberGallons)
{
	int choice;
	cout << "Welcome to the Fueling Station" << endl;
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
