// ConstPreprocNamespace.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//define symbolic constants and functions that are callable
#define PI 3.1456
#define c cout

#ifndef sqr(x)
	#define sqr(x) (x*x)
#endif

namespace Test
{
	class NamespaceTest
	{
	public:
		NamespaceTest() {}
		int x;
	};
}
int main()
{
	int variable1 = 8;
	int variable2 = 9;

	//constant variable
	const int constX1 = 10;
	int const constX2 = 20;

	// a pointer of type integer constant
	const int* constIntPtr1 = &constX1;
	int const *constIntPtr2 = &constX2;

	//a constant pointer of type int
	int* const intConstPtr1 = &variable1;
	//intConstPtr1 = &variable2;

	//a constant pointer to a constant int type
	const int* const ultraConstIntPtr = &variable1;

	c << PI << endl;

	Test::NamespaceTest test;
	
	return 0;
}