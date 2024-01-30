#include <iostream>

using namespace std;

#ifndef FRACTION_H  
#define FRACTION_H

class FRACTION_H
{
    private:
        int number;
        int denom;
    public:
        Fraction(int num, int den);
        Fraction();
        Fraction(const Fraction& fract);
        ~Fraction();

        
}