// SmartPointersAndOthers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdarg.h>

using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;

public:
	Rectangle(int length, int breadth)
	{
		this->length = length;
		this->breadth = breadth;
	}

	int area() { return this->length*this->breadth; }
};

//a function with a variable number of parameters of the same type uses ... after the first parameter
int elipsisSum(int n, ...)
{
	//an object of type va_list must be created to hold the variable number of params
	va_list list;
	va_start(list, n);

	int x;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		s += x;
	}
	return s;
}

int main()
{
	//smart pointers handle the deletion of the pointer automatically

	//unique pointer can point to one object only
	unique_ptr<Rectangle> unique_rectangle1(new Rectangle(8, 18));
	cout << unique_rectangle1->area() << endl;

	unique_ptr<Rectangle> unique_rectangle2;
	unique_rectangle2 = move(unique_rectangle1);

	//an object can be pointed to by multiple shared pointers
	shared_ptr<Rectangle> shared_rectangle1(new Rectangle(38, 45));
	shared_ptr<Rectangle> shared_rectangle2 = shared_rectangle1;
	cout << shared_rectangle1->area() << endl;
	cout << shared_rectangle2->area() << endl;

	//elipsis function call
	cout << elipsisSum(4, 6, 5, 2, 3) << endl;
	cout << elipsisSum(4, 6, 5, 2, 3, 48, 9, 6, 4, 8) << endl;

	return 0;
}