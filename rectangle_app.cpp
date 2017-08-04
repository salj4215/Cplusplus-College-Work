//Sp3ecification file for the Rectangle Class
#ifndef RECTANGLE_H
#define RECTANGLE_H

//Rectangle class declaration

class Rectangle
{
	private:
		double width;
		double length;
	public:
		void setWidth(double);
		void setLength(double);
		double getWidth() const;
		double getLength() const;
		double getArea() const;
};

#endif

//Implementation file for the Rectangle class
#include "Rectangle.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getArea() const
{
	return width * length;
}

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle box;
	double rectWidth;
	double rectLength;
	
	cout << "This program will calculate the area of a \n";
	cout << "rectangle. What is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;
	
	box.setWidth(rectWidth);
	box.setLength(rectLength);
	
	cout << "Here is the rectangle's data: \n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
	return 0;
}
