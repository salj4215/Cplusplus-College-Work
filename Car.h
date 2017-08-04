#ifndef CAR_H
#define CAR_H
#include <string>

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



