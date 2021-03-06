// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 8;
	int *p = &x;

	cout << "value of x: " << x << endl;
	cout << "address of x: " << &x << endl;
	cout << "address of x pointed by p: " << p << endl;
	cout << "address of p: " << &p << endl;
	cout << "value of x dereferenced by p: " << *p << endl;

	//create an int array in the heap
	int *pArray = new int[5];
	pArray[0] = 8;
	pArray[1] = 18;

	//ALWAYS delete the pointer variable first, THEN asign it to null.
	delete pArray;
	pArray = nullptr;

	//pointer arithmetic
	int B[]{ 8,18,36,44,22 };
	int *pb = B;
	//simple call to the pointer will display the first value in the array
	cout << *pb << endl;
	pb++;
	//after increment, the pointer will display the first value in the array
	cout << *pb << endl;

	for (int i = 0; i < 5; i++)
	{
		//cout << B[i] << endl;
		//cout << i[B] << endl;
		//cout << *(B + i) << endl;
		//cout << B + i << endl;
		//cout << *(pb + i) << endl;
		//cout << pb[i] << endl;
		cout << *pb << endl;
		pb++;
	}

	//reference
	int x = 9;
	int &y = x;

	return 0;
}
