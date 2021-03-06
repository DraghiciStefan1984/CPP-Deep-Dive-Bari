// OOPTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
	T* stack;
	int top;
	int size;

public:
	Stack(T size)
	{
		this->size = size;
		this->top = -1;
		this->stack = new T[size];
	}

	void push(T x)
	{
		if (top == size - 1)
		{
			return;
		}
		else
		{
			top++;
			stack[top] = x;
		}
	}

	T pop()
	{
		T x = 0;
		if (top == -1) {}
		else
		{
			x = stack[top];
			top--;
		}
		return x;
	}
};

int main()
{
	Stack<int> sInt(10);
	sInt.push(8);
	sInt.push(18);
	sInt.push(38);

	Stack<double> sDouble(10.5);
	sDouble.push(8);
	sDouble.push(18.54);
	sDouble.push(38.12156);
	return 0;
}