// IOStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
public:
	string name;
	int roll;
	string branch;
	//same for >> operator
	friend ofstream& operator<<(ofstream& ofs, Student& student);
};

ofstream& operator<<(ofstream& ofs, Student& student)
{
	ofs << student.name << ", " << student.roll << ", " << student.branch << "." << endl;
	return ofs;
}

int main()
{
	ofstream ofs("test.txt", ios::trunc);
	ofs << "Stefan" << endl;
	ofs << 34 << endl;
	ofs << "happy." << endl;
	ofs.close();

	ifstream inFile;
	inFile.open("test.txt");
	if (!inFile.is_open())
	{
		cout << "File cannot be opened" << endl;
	}
	else
	{
		string str1, str2;
		int x;
		inFile >> str1;
		inFile >> x;
		inFile >> str2;
		cout << str1 << " " << x << " " << str2 << endl;
		if (inFile.eof())
		{
			cout << "end of file." << endl;
			inFile.close();
		}
	}

	//Serialization
	Student s1;
	s1.name = "John";
	s1.roll = 10;
	s1.branch = "CS";

	ofstream ofs2("Student.txt", ios::trunc);
	ofs2 << s1;
	ofs2.close();



	return 0;
}