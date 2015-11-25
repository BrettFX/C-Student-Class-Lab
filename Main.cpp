#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void sys(string command);

int main()
{
	//Creating 3 instances of the Student class
	Student partner1_Brett;
	Student Powell(4);
	Student Jeffie("Jeffie", 40, 5);

	cout << "Calling the set functions\n";

	//Setters for partner1_Brett
	partner1_Brett.setName("Brett");

	//Test validation on ID
	partner1_Brett.setID(200);

	partner1_Brett.setID(20);

	//test array has 3 elements for partner1_Brett
	partner1_Brett.setScore(0,75);
	partner1_Brett.setScore(1,85);
	partner1_Brett.setScore(2,95);

	//Setters for Powell
	Powell.setName("Powell");
	Powell.setID(30);

	//test array has 4 elements for Powell
	Powell.setScore(0,70);
	Powell.setScore(1,80);
	Powell.setScore(2,90);
	Powell.setScore(3,100);

	//Test validation on test array bounds
	Powell.setScore(5,95);
	Powell.setScore(4,105);
	Powell.setScore(-5,-105);

	//Setters for Jeffie
	//test array has 5 elements for Jeffie
	Jeffie.setScore(0,90);
	Jeffie.setScore(1,91);
	Jeffie.setScore(2,92);
	Jeffie.setScore(3,93);
	Jeffie.setScore(4,94);

	cout << "\nCalling the display function\n";

	//Display partner1_Brett
	partner1_Brett.display();

	//Display Powell
	Powell.display();

	//Display Jeffie
	Jeffie.display();

	sys("pause");
	return 0;
}

void sys(string command)
{
	if(command == "pause")
	{
		cout << "Press any key to continue . . .";
		cin.get();
	}
}
