/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include <iostream>
#include <string>
#include "func.h"

using namespace std;


int choice;
string dna;
double numResult;
string strResult;

int main() 
{
	cout << "Welcome to the DNA Strand Program" << '\n' << '\n';
	cout << "|Please input the number one of the following programs|" << '\n';
	cout << "1. Get GC Content" << '\n' << "2. Get DNA Compliment" << '\n' << "3. Exit" << '\n';
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter the DNA strand you would like the GC-content for: ";
		cin >> dna;
		numResult = get_gc_content(dna);
		cout << '\n' << "The GC-content of this strand is " << numResult << '\n';
		break;

	case 2:
		cout << "Enter the DNA strand you would like the DNA complement for: ";
		cin >> dna;
		strResult = get_dna_complement(dna);
		cout << '\n' << "The DNA complement of this strand is " << strResult << '\n';
		break;
	
	case 3:
		cout << "Exiting Program...." << '\n';
		break;

	default:
		cout << "Invalid Input" << '\n';
		break;
	}
	cout << "Program End";
	return 0;
}