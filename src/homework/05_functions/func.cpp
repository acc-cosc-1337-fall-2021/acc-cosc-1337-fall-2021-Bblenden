//add include statements
#include <iostream>
#include "func.h"
#include <string>
#include <algorithm>

using namespace std;
//add function code here

double get_gc_content(const string& dna)
{
    
    double cg_Counter = 0.0;
    int leng = dna.length();
    for (int i = 0; i < leng; i++)
    {
        if (dna[i] == 'C')
        {
            cg_Counter += 1.0;
            
        }
        else if (dna[i] == 'G')
        {
            cg_Counter += 1.0;
            
        }
    }
    double perc = cg_Counter / leng;
    return perc;
}

string get_dna_complement(string dna)
{
    
    int leng = dna.length();
    dna = get_reverse_string(dna);
    for (int i = 0; i < leng; i++)
    {
        if (dna[i] == 'A')
        {
            dna[i] = 'T';
        }
        
        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        
        else if (dna[i] == 'G')
        {
            dna[i] = 'C';
        }

        else if (dna[i] == 'C')
        {
            dna[i] = 'G';
        }
    }
    return dna;
}

string get_reverse_string(string dna)
{
    reverse(dna.begin(), dna.end());
    return dna;
    
}