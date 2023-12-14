#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H

#include "Benefit.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class HealthBenefit : public Benefit
{
private:
    string information;
    string coverage;
public:
    HealthBenefit();
    HealthBenefit(string information,string coverage,string PlanType,double amount):Benefit(PlanType,amount)
    {
        this->information=information;
        this->coverage=coverage;
    }
    double Calculate_Benefit();
    void get_details();
    void Display_Benefit();
    virtual ~HealthBenefit();

protected:


};

#endif // HEALTHBENEFIT_H
