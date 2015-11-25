#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student
{
private:
	string name;
	int id;
	int* test;
	int num;

	void makeArray()
	{
		//Dynamically allocate new integer array with size of num
		test = new int[num];
	}

public:
	Student()
	{
		setName("None");
		setID(10);
		num = 3;
		makeArray();
	}

	Student(int n);

	Student(string nm, int i, int n);

	void setName(string nm)
	{
		name = nm;
	}

	void setID(int i);

	void setScore(int i, int s);

	string getName()const
	{
		return name;
	}

	int getID()const
	{
		return id;
	}

	void showScore();

	void display();

	~Student();
};

#endif
