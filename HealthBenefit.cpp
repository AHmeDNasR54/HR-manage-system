#include "HealthBenefit.h"

HealthBenefit::HealthBenefit()
{
    //ctor

}

HealthBenefit::~HealthBenefit()
{
    //dtor
}
void HealthBenefit::get_details()
{
    string information,planty;
    string coverage;
    cout<<"Enter Plan type (Gold/Silver/platinum)?\n";
    cin>>planty;
    set_planType(planty);
    Benefit::get_details();
    cout<<"Enter information: ";
    cin>>information;
    this->information=information;
    cout<<"Enter coverage: ";
    cin>>coverage;
    this->coverage=coverage;

}

double HealthBenefit::Calculate_Benefit()
{
    double result=0.2*amount;
    return result;
}

void HealthBenefit::Display_Benefit()
{

    cout<<"> Plan type: "<<get_PlanType()<<"\n";
    cout<<"> Amount : "<<amount<<endl;
    cout<<"> Information: "<<information<<endl;
    cout<<"> Coverage: "<<coverage<<endl;
    cout<<"> Benefit = "<<Calculate_Benefit()<<endl;
}
