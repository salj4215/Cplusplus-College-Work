#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	private:
		double radius;
		const double PI = 3.14159;
	public:
		Circle();
		Circle(double);
		void setRadius(double);
		double getRadius() const;
		double getArea() const;
		double getDiameter() const;
		double getCircumference() const;
};
#endif

#include "Circle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Circle::Circle()
{
	radius = 0.0;
}

Circle::Circle(double r)
{
	if(r >= 0)
		radius = r;
	else
	{
		cout << "Invalid radius\n";
		exit(EXIT_FAILURE);
	}
}

void Circle::setRadius(double r)
{
	if(r >= 0)
		radius = r;
	else
	{
		cout << "Invalid radius\n";
		exit(EXIT_FAILURE);
	}
}

double Circle::getArea() const
{
	return PI * radius * radius;
}

double Circle::getDiameter() const
{
	return radius * 2;
}

double Circle::getCircumference() const
{
	return 2 * PI * radius;
}

#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle cir;
	
	double cirRadius;
	
	cout << "This program will calculate the area, diameter, and circumference of a circle.\n";
	cout << "What is the radius? ";
	cin >> cirRadius;
	
	cir.setRadius(cirRadius);
	
	cout << "The area is : " << cir.getArea() << endl;
	cout << "The diameter is : " << cir.getDiameter() << endl;
	cout << "The circumference is : " << cir.getCircumference() << endl;
	
	return 0;
	
	
	
}

