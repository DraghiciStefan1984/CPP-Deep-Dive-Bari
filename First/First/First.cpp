// First.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter 2 numbers:";
	cin >> a >> b;
	c = a + b;
	cout << "Sum is: " << c << endl;

	string str;
	cout << "May I know your name?";
	cin >> str;
	cout << "Your name is: " << str << endl;
}
