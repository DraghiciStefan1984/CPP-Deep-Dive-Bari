// FunctionTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

template <class T>
T maxim(T a, T b)
{
	return a > b ? a : b;
}

int sum(int a = 0, int b = 0)
{
	return a + b;
}

void swapValue(int a, int b)
{
	cout << "a: " << a << ", b: " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << ", b: " << b << endl;
}

void swapAddress(int *a, int *b)
{
	cout << "a: " << a << ", b: " << b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a: " << a << ", b: " << b << endl;
}

//don't put complex login when dealing with pass by reference functions
void swapReference(int &a, int &b)
{
	cout << "a: " << a << ", b: " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << ", b: " << b << endl;
}

int * returnByAddress()
{
	int * p = new int[5];
	for (int i = 0; i < 5; i++)
	{
		p[i] = 5 + i;
	}
	return p;
}

int main()
{
	cout << maxim(12, 24) << endl;
	cout << maxim(23.5, 44.63) << endl;
	cout << sum(20) << endl;
	cout << sum(15, 44) << endl;

	int x = 8;
	int y = 18;
	cout << "x: " << x << ", y: " << y << endl;
	swapValue(x, y);
	cout << "x: " << x << ", y: " << y << endl;

	cout << "x: " << x << ", y: " << y << endl;
	swapAddress(&x, &y);
	cout << "x: " << x << ", y: " << y << endl;

	cout << "x: " << x << ", y: " << y << endl;
	swapReference(x, y);
	cout << "x: " << x << ", y: " << y << endl;
	cout << returnByAddress() << endl;
	return 0;
}
