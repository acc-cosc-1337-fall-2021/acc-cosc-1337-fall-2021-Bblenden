//write include statements
#include<iostream>
#include<iomanip>
#include"hwexpressions.h"
//write namespace using statement for cout
using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;
	cout << "What is the amount of the meal?" << '\n';
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout << "How much is the tip rate percentage?" << '\n';
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tip_amount + tax_amount;
	cout << std::fixed;
	cout << std::setprecision(2);
	cout << "Meal Amount:" << std::setw(8) << meal_amount << '\n';
	cout << "Sales Tax:" << std::setw(10) << tax_amount << '\n';
	cout << "Tip Amount:" << std::setw(9) << tip_amount << '\n';
	cout << "Total:" << std::setw(14) << total << '\n';
	
	return 0;
} 
