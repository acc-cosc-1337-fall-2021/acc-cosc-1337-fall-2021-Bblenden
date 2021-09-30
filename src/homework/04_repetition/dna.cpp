//add include statements
#include<iostream>
#include "dna.h"
//add function(s) code here

int factorial (int num)
{
    int total = 1;
    while (num > 0)
    {
        total = total * num;
        num--;
    }
    return total;
}

int gcd (int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        else if (num1 > num2)
        {
           num1 -= num2; 
        }
    }
    return num1;
}