#include<iostream>
#include<string>
#include<decisions.h>


using namespace std;
char letterGrade;


char get_letter_grade_using_if(int grade)
{
    if (grade >= 90)
    {
        letterGrade = 'A';
    }

    else if (grade <= 89 && grade >= 80)
    {
        letterGrade = 'B';
    }

    else if (grade <= 79 && grade >= 70)
    {
        letterGrade = 'C';
    }

    else if (grade <= 69 && grade >= 60)
    {
        letterGrade = 'D';
    }

    else if (grade <= 59)
    {
        letterGrade = 'F';
    }
    return letterGrade;
}

char get_letter_grade_using_switch(int grade)
{
    switch (grade)
    {
    case 90 ... 100:
        letterGrade = 'A';
        break;
    case 80 ... 89:
        letterGrade = 'B';
        break;
    case 70 ... 79:
        letterGrade = 'C';
        break;
    case 60 ... 69:
        letterGrade = 'D';
        break;
    case 0 ... 59:
        letterGrade = 'F';
        break;
    }
    return letterGrade;
}