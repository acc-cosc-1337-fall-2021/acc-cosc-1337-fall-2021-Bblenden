#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num = 5, num1 = 100;
	int& num_ref = num;

	cout<<num<<"\n";
	num_ref = 10;
	cout<<num<<"\n";

	int* num_ptr = &num;
	cout<<num<<"\n";

	*num_ptr = 15;
	cout<<num<<"\n";

	cout<<&num_ref<<"\n";

	num_ref = num1;
	cout<<&num_ref<<"\n";
	cout<<num<<"\n";

	cout<<num_ptr<<"\n";
	num_ptr = &num1;
	cout<<num_ptr<<"\n";

	return 0;
}