#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <cmath>
using namespace std;


class Fraction
{
    int num,denom;
    string frac;
    public:
        Fraction();
        Fraction(int ,int );
        Fraction(string );

        //list of operations*****************
        Fraction operator+(Fraction );
        Fraction operator-(Fraction );
        Fraction operator*(Fraction );
        Fraction operator/(Fraction );

        //comparison********************************
        bool operator<(Fraction );
        bool operator>(Fraction );
        bool operator<=(Fraction );
        bool operator>=(Fraction );
        bool operator==(Fraction );

        void reduction();

        friend istream& operator>>(istream& ,Fraction& );
        friend ostream& operator<<(ostream& ,Fraction& );

};

#endif // FRACTION_H
