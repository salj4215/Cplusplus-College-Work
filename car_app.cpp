#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
	private:
		string make;
		int yearModel;
		int speed;
	public:
		Car(int year, string m)
		{
			yearModel = year;
			make = m;
			speed = 0;
		}
		void setYearModel(int y)
		{
			yearModel = y;
		}
		void setMake(string m)
		{
			make = m;
		}
		void setSpeed(int s)
		{
			speed = s;
		}
		int getYearModel() const
		{
			return yearModel;
		}
		string getMake() const
		{
			return make;
		}
		int getSpeed() const
		{
			return speed;
		}
		void accelerate()
		{
			speed += 5;
		}
		void brake()
		{
			speed -= 5;
		}
};
#endif

#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	int modelYear;
	string carMake;
	
	cout << "What is the model year of the car? ";
	cin >> modelYear;
	cin.ignore();
	
	cout << "What is the make of the car? ";
	getline(cin, carMake);
	
	Car car1(modelYear, carMake);
	
	cout << "Car is a " << car1.getYearModel() << " " << car1.getMake() << endl;
	
	for(int x = 0; x < 5; x++)
	{
		cout << "Accelerating..." << endl;
		car1.accelerate();
		cout << "Current speed is " << car1.getSpeed() << endl;
	}
	
	for(int x = 0; x < 5; x++)
	{
		cout << "Braking..." << endl;
		car1.brake();
		cout << "Current speed is " << car1.getSpeed() << endl;
	}
	
	return 0;
	
}
