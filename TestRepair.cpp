//TestRepair
#include <iostream>
#include "Repair.h"
using namespace std;

char menu();

int main()
{
	//Repair object with default constructor
	Repair service1;
	service1.display();
	//Repair object with constructor accepting char
	char repairChoice;
	repairChoice = menu();
	Repair service2(repairChoice);
	cout << endl << endl;
	service2.display();
	
	return 0;
}

char menu()
{
	char r;
	cout << "Welcome to Car Basics" << endl << endl;
	cout << "We have the following services: " << endl << endl;
	cout << "(O) oil change\t\t$25.00\n";
	cout << "(T) tire rotation\t$22.00\n";
	cout << "(B) battery check\t$15.00\n";
	cout << "(I) brake inspection\t$5.00\n";
	cout << "Choose by entering the corresponding character inside the parenthesis next to the service you want done: ";
	cin >> r;
	return r;
}
