// OOPInheritence.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
		this->length = 1;
		this->breadth = 1;
		cout << "Rectangle constructor called;" << endl; 
	}

	Rectangle(int length, int breadth) :length(length), breadth(breadth) {};
	Rectangle(Rectangle &rectangle) :length(rectangle.getLength()), breadth(rectangle.getBreadth()) {};
	int getLength() { return this->length; }
	void setLength(int length) { this->length = length; }
	int getBreadth() { return this->breadth; }
	void setBreadth(int breadth) { this->breadth = breadth; }
	int area() { return this->breadth*this->length; }
	int perimeter() { return 2 * this->length + 2 * this->breadth; }
	bool isSquare() { return this->length == this->breadth; }
	~Rectangle() { cout << "Rectabgle desctructor called" << endl; };
};

class Cube :public Rectangle
{
private:
	int height;

public:
	Cube() { cout << "Cube constructor called;" << endl; }
	Cube(int length, int breadth, int height)
	{
		this->height = height;
	}
	int getHeight() { return this->height; }
	void setHeight(int height) { this->height = height; }
	int volume() { return getLength()*getBreadth()*this->height; }
};

class Base
{
public:
	Base() { cout << "Default Base constr" << endl; }
	Base(int x) { cout << "Param Base constr: " << x << endl; }
};

class Derrived : public Base
{
public:
	Derrived() { cout << "Default Derrived constr" << endl; }
	Derrived(int x) { cout << "Param Derrived constr: " << x << endl; }
};

int main()
{
	/*
	Cube c;
	c.setBreadth(8);
	c.setLength(4);
	c.setHeight(5);
	cout << c.volume() << endl;
	*/
	Derrived d(10);

	return 0;
}