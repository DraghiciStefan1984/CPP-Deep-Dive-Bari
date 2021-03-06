// OOPStart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	Rectangle() 
	{
		length = 1;
		breadth = 1;
	}

	Rectangle(int length, int breadth = 0)
	{
		this->length = length;
		this->breadth = breadth;
	}

	//copy contructor
	Rectangle(Rectangle &rectangle)
	{
		//copy the values from the referenced rectangle to the new rectangle
		length = rectangle.length;
		breadth = rectangle.breadth;
	}

	void setLength(int length)
	{
		this->length = length;
	}

	int getLength()
	{
		return this->length;
	}

	void setBreadth(int breadth)
	{
		this->breadth = breadth;
	}

	int getBreadth()
	{
		return this->breadth;
	}

	int area()
	{
		return length * breadth;
	}

	int perimeter()
	{
		return 2 * (length + breadth);
	}
};

int main()
{
	//create an object in stack (only in c++)
	Rectangle r1;
	r1.setLength(20);
	r1.setBreadth(18);
	cout << r1.area() << endl;
	cout << r1.perimeter() << endl;

	//create an object in heap
	Rectangle *r2 = new Rectangle();
	r2->setBreadth(44);
	r2->setLength(55);
	cout << r2->area() << endl;
	cout << r2->perimeter() << endl;

	return 0;
}
