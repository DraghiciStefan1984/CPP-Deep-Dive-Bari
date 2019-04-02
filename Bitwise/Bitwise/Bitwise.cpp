// Bitwise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 11, y = 88;
	int z;
	z = x & y;
	cout << "x & y: " << z << endl;
	z = x | y;
	cout << "x | y: " << z << endl;
	z = x ^ y;
	cout << "x ^ y: " << z << endl;
	z = x >> y;
	cout << "x >> y: " << z << endl;
	z = x << y;
	cout << "x << y: " << z << endl;
	z = x >> 1;
	cout << "x >> 1: " << z << endl;
	z = x << 1;
	cout << "x << 1: " << z << endl;
	z = ~x;
	cout << "~x: " << z << endl;
	return 0;
}