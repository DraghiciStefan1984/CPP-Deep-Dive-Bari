// EnumTypedef.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

enum Day { mon, fri, wen };

#define sun 1
#define sat 0

typedef int mark;

int main()
{
	cout << Day::fri << endl;
	mark m1 = 10, m2 = 8;
	cout << m1 << ", " << m2 << endl;
	return 0;
}