// CPP11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*final makes a class imposible to inherit and function imposibile to override
class Parent final
{
	virtual void func() final
	{

	}
};

class Child : public Parent
{
	void  func() {}
};
*/

int main()
{
	auto unknown= 2 * 5.6 + 'b';

	//lambda expression
	[](int x, int y) {cout << "Sum is: " << x+y << endl; }(10, 20);
	cout << [](double x, double y) {return x * y; }(40.6, 44.5);

	int a = 8;
	//call an extrenal variable
	[a]() {cout << a << endl; };

	//call an external variable through a function
	auto func=[&a]() {cout << a << endl; };
	func();
	a++;
	func();

	return 0;
}