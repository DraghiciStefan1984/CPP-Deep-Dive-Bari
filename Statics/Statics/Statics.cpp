// Statics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void func()
{
	static int n = 10;
	n++;
	cout << n << endl;
}

int main()
{
	func();
	func();
	return 0;
}
