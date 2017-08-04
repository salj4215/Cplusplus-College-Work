//Employee/ProductionWorker Classes
//BASE CLASS
#ifndef Employee_H
#define Employee_H

#include <string>
using namespace std;
//Employee class declaration

class Employee
{
	private:
		string empName;
		int empNum;
		string hireDate;
	public:
		//Default constructor
		Employee()
		{
			empName = " ";
			empNum = 0;
			hireDate = " ";
		}
		//Constructor
		Employee(string s, int num, string date)
		{
			empName = s;
			empNum = num;
			hireDate = date;
		}
		//Mutator functions
		void setEmployeeName(string s)
		{
			empName = s;
		}
		void setEmployeeNumber(int n)
		{
			empNum = n;
		}
		void setHireDate(string d)
		{
			hireDate = d;
		}
		//Accessor functions
		string getEmployeeName() const
		{
			return empName;
		}
		int getEmployeeNumber() const
		{
			return empNum;
		}
		string getHireDate() const
		{
			return hireDate;
		}
};
#endif

//Derived Class
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
//#include "GradedActivity.h"

class ProductionWorker : public Employee
{
	private:
		int shift;
		double payRate;
	public:
		//Default Constructor
		ProductionWorker()
		{
			shift = 0;
			payRate = 0.0;
		}
		//Constructor
		ProductionWorker(int n, double d)
		{
			shift = n;
			payRate = d;
		}
		//Constructor
		ProductionWorker(int n, double d, string name, int num, string date)
		{
			shift = n;
			payRate = d;
			setEmployeeName(name);
			setEmployeeNumber(num);
			setHireDate(date);
		}
		//Mutator functions
		void setShift(int n)
		{
			shift = n;
		}
		void setPayRate(double d)
		{
			payRate = d;
		}
		//Accessor functions
		int getShift() const
		{
			return shift;
		}
		double getPayRate() const
		{
			return payRate;
		}
};
#endif

#include <iostream>
#include <iomanip>
//#include "FinalExam.h"

int main()
{
	string employeeName = "Bob Smith";
	int employeeNumber = 123;
	string hireDate = "01/01/2016";
	int shift = 1;
	double payRate = 12.00;
	
	ProductionWorker employee(shift, payRate, employeeName, employeeNumber, hireDate);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Employee name: " << employee.getEmployeeName() << endl;
	cout << "Employee number: " << employee.getEmployeeNumber() << endl;
	cout << "Employee's Date of Hire: " << employee.getHireDate() << endl;
	if(employee.getShift() == 1)
		cout << "Employee shift: Day shift" << endl;
	else
		cout << "Employee shift: Night shift" << endl;
	cout << "Employee's Rate of Pay: $" << employee.getPayRate();
	
	return 0;
	
}
