// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*
	int A[5] = {8,12,18,56};
	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << endl;
	}

	A[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << endl;
	}

	int B[] = { 0, 1, 2, 3 };
	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << endl;
	}

	int B[] = { 0, 1, 2, 3 };
	for (int item:B)
	{
		cout << item << endl;
	}

	cout << endl;
	*/

	for (int i = 0; i <= 5; i++)
	{
		for (int j = 1; j <= 5-i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}