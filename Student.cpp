#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student(int n)
{
	setName("None");
	setID(10);

	if(n > 0)
	{
		num = n;
	}
	else
	{
		num = 3;
	}

	makeArray();
}

Student::Student(string nm, int i, int n)
{
	setName(nm);
	setID(i);

	if(n > 0)
	{
		num = n;
	}
	else
	{
		num = 3;
	}

	makeArray();
}

void Student::setID(int i)
{
	if(i >= 10 && i <= 99)
	{
		id = i;
	}
	else
	{
		id = 10;

		cout << "Invalid. Cannot set the id to " << i << " for " << getName() << endl;
	}
}

void Student::setScore(int i, int s)
{
	//Preventing going outside of the bounds of the dynamically allocated array
	if(i >= 0 && i < num)
	{
		if(s >= 0 && s <= 100)
		{
			//Set score to index i
			test[i] = s;
		}
	}
	else
	{
		cout << "Invalid. Cannot set test " << i << " cannot be set to " << s << " for "
				<< getName() << endl;
	}
}

void Student::showScore()
{
	//Traverse through dynamic array and display test number and score
	for(int index = 0; index < num; index++)
	{
		cout << "Test " << index << " had a score of " << test[index] << endl;
	}

	cout << endl;
}

void Student::display()
{
	cout << "The Name: " << getName() << endl;
	cout << "The ID: " << getID() << endl;
	showScore();
}

Student::~Student()
{
	delete [] test;
}
