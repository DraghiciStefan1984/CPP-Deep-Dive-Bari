// OOPAbstract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Car
{
public:
	virtual void start() { cout << "Car started" << endl; }
};

class Innova : public Car
{
	void start() { cout << "Innova started" << endl; }
};

class Swift : public Car
{
	void start() { cout << "Swift started" << endl; }
};

int main()
{
	Car* carPtr1 = new Innova();
	carPtr1->start();
	Car* carPtr2 = new Swift();
	carPtr2->start();
	return 0;
}