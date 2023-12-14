#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H

#include "Benefit.h"
#include<iostream>
#include<string>
#include<sstream>// to use string stream
using namespace std;
class DentalBenefit : public Benefit
{
public:
    string information;
    double  Calculate_Benefit();
    void Display_Benefit();
    void get_details();
    DentalBenefit();
    DentalBenefit(string information,string PlanType,double amount):Benefit(PlanType,amount)
    {
        this->information=information;
    }


    virtual ~DentalBenefit();

protected:

private:
};

#endif // DENTALBENEFIT_H
