// OOPBaseDerivPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Base
{
public:
	void func1() { cout << "Func1 from base" << endl; }
	virtual void virtualFunc() { cout << "Virtual func in base" << endl; }
	virtual void mustBeImplemented() = 0;
};

class Derrived : public Base
{
public:
	void func1() { cout << "Func1 from derrived" << endl; }
	void func2() { cout << "Func2 from derrived" << endl; }
	void virtualFunc() override { cout << "Virtual func in derrived" << endl; }
};

int main()
{
	Base b1;
	b1.func1();
	b1.virtualFunc();

	Derrived d1;
	d1.func1();
	d1.func2();
	d1.virtualFunc();

	Base* basePtr = &d1;
	basePtr->func1();
	basePtr->virtualFunc();
	return 0;
}
