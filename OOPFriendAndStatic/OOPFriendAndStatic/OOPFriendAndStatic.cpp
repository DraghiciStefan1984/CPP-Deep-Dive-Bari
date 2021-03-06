// OOPFriendAndStatic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Test
{
private:
	int a;
protected:
	int b;
public:
	static int count;
	
	Test() { count++; }
	
	int c;
	
	//declare function friendFunc() as a firnd function to access the private and protected members of the class
	// same with a friend class
	friend void friendFunc();
};

//the static member must be delcared outside de class as well with the score resolution operator
int Test::count = 0;

void friendFunc()
{
	Test t;
	t.a = 10;
	t.b = 20;
	t.c = 30;
}

int main()
{
	Test t1;
	cout << t1.count << endl;
	Test t2;
	cout << t2.count << endl;
	cout << Test::count << endl;
	return 0;
}