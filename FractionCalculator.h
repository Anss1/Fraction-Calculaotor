#ifndef FRACTIONCALCULATOR_H
#define FRACTIONCALCULATOR_H
#include "Fraction.h"


class FractionCalculator:public Fraction
{
    Fraction result;
    public:
        FractionCalculator();
        void interface();


};

#endif // FRACTIONCALCULATOR_H
