//write include statements
#include<iostream>
#include "dna.h"

//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	cout << "Welcome to the factorial and gcd program!" << '\n';
	cout << "Please select one of the following:" << '\n';
	int dicision;
	int num;
	int num1;
	int num2;
	char again;
	do
	{
		cout << '\n' << "1. Factorial program" << '\n' << "2. Greatest Common Divisor Program" << '\n' << "3. Exit" << '\n';
		cin >> dicision;
		if (dicision == 1)
		{
			cout << "|Factorial Program|" << '\n';
			cout << "Enter your number";
			cin >> num;
			int factorialNum = factorial(num);
			cout << '\n' << "Your number after being factored is: " << factorialNum << '\n';
			cout << "Would you like to start over? (Y/N): ";
			cin >> again;
		}

		else if (dicision == 2)
		{
			cout << "|Greatest Common Divisor Program|" << '\n';
			cout << "Enter your first number: ";
			cin >> num1;
			cout << '\n' << "Enter your second number: ";
			cin >> num2;
			cout << '\n';
			int gcdNum = gcd(num1, num2);
			cout << '\n' << "Your greatest common divisior is: " << gcdNum << '\n';
			cout << "Would you like to start over? (Y/N): " << '\n';
			cin >> again;
		}
		else if (dicision == 3)
		{
			char exitChoice;
			cout << "Are you sure you want to exit? (Y/N)" << '\n';
			cin >> exitChoice;
			if (exitChoice == 'Y' || exitChoice == 'y')
			{
				again = 'n';

			}
			else if (exitChoice == 'N' || exitChoice == 'n')
			{
				again = 'y';
			}
			else
			{
				cout << "invalid input" << '\n';
			}
		}
		else
		{
			cout << "invalid input" << '\n';
		}
	}
	while (again == 'Y' || again == 'y');	
	cout << "End of program";
	
	return 0;
}