//Multipurpose Payroll

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;



struct HourlyPaid
{
	double hoursWorked;
	double hourlyRate;
};

struct Salaried
{
	double salary;
	double bonus;
};

union EmployeeType
{
	HourlyPaid h;
	Salaried s;
};

int main()
{
	EmployeeType employee1;
	char empType;
	double empPay;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter H for hourly paid employee or S for Salaried employee: ";
	cin >> empType;
	
	if(empType == 'H' || empType == 'h')
	{
		cout << "What is the hourly rate? ";
		cin >> employee1.h.hourlyRate;
		while(employee1.h.hourlyRate < 0)
		{
			cout << "Please enter a number greater than 0." << endl;
			cout << "What is the hourly rate? ";
			cin >> employee1.h.hourlyRate;
		}
		cout << "How many hours did the employee work? ";
		cin >> employee1.h.hoursWorked;
		while(employee1.h.hoursWorked < 0 || employee1.h.hoursWorked > 80)
		{
			cout << "Please enter a number between 0 and 80." << endl;
			cout << "How many hours did the employee work? ";
			cin >> employee1.h.hoursWorked;
		}
		empPay = employee1.h.hourlyRate * employee1.h.hoursWorked;
		cout << "The employee's pay is " << empPay;
	}
	
	if(empType == 'S' || empType == 's')
	{
		cout << "What is the employee's salary? ";
		cin >> employee1.s.salary;
		while(employee1.s.salary < 0)
		{
			cout << "Please enter a number greater than 0." << endl;
			cout << "What is the employee's salary? ";
			cin >> employee1.s.salary;
		}
		cout << "What is the employee's bonus amount? ";
		cin >> employee1.s.bonus;
		while(employee1.s.bonus < 0)
		{
			cout << "Please enter a number greater than 0." << endl;
			cout << "What is the employee's bonus amount? ";
			cin >> employee1.s.bonus;
		}
		empPay = employee1.s.salary + employee1.s.bonus;
		cout << "The employee's pay is $" << empPay;
	}
	
	return 0;
}
