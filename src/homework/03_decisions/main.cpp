//write include statements
#include<iostream>
#include"decisions.h"

using namespace std;

int main() 
{
	int decision;
	int grade;
	char letterGrade;
	cout << "Welcome to the Letter Grade calculator!" << '\n';
	cout << "MAIN MENU: (please enter the number for the menu option you would like.)" << '\n' << "1. Letter grade using if" << '\n' << "2. Letter grade using switch" << '\n' << "3. EXIT" << '\n';
	cin >> decision;

	switch (decision)
	{
		case 1:
		cout << "|Letter Grade using if|" << '\n';
		cout << "Enter the numeric grade value: ";
		cin >> grade;
		if (grade > 100 || grade < 0)
		{
			cout << '\n' << "That number is out of range";
			break;
		}
		letterGrade = get_letter_grade_using_if(grade);
		cout << '\n' << "The letter grade is: " << letterGrade;
		break;

		case 2:
		cout << "|Letter Grade using switch|" << '\n';
		cout << "Enter the numeric grade value: ";
		cin >> grade;
		if (grade > 100 || grade < 0)
		{
			cout << '\n' << "That number is out of range";
			break;
		}
		letterGrade = get_letter_grade_using_switch(grade);
		cout << '\n' << "The letter grade is: " << letterGrade;
		break;

		case 3:
		cout << "Exiting Program...";

		default:
		break;
	}
	return 0;
}