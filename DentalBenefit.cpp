#include "DentalBenefit.h"

DentalBenefit::DentalBenefit()
{
    //ctor
        set_planType("Dental");

}

DentalBenefit::~DentalBenefit()
{
    //dtor
}
void DentalBenefit::get_details()
{
    string information,planty;
    cout<<"Enter Plan type (Gold/Silver/platinum)?\n";
    cin>>planty;
    set_planType(planty);
    Benefit::get_details();
    cout<<"Enter information: ";
    cin>>information;
    this->information=information;
}

double DentalBenefit::Calculate_Benefit()
{
    double result=0.1*amount;
    return result;
}
void DentalBenefit::Display_Benefit()
{

    cout<<"--> Plan type: "<<get_PlanType()<<"\n";
    cout<<"--> Amount : "<<amount<<endl;
    cout<<"--> Information: "<<information<<endl;
    cout<<"--> Benefit = "<<Calculate_Benefit()<<endl;
}

