#include "Benefit.h"

Benefit::Benefit()
{
    //ctor
}

Benefit::~Benefit()
{
    //dtor
}
Benefit::Benefit(string PlanType,double amount)
{
    this->PlanType=PlanType;
    this->amount=amount;
}
void Benefit::set_amount(double amount)
{
    this->amount=amount;
}
void  Benefit::get_details()
{

   double amount;

    cout<<"Enter amount: ";
    cin>>amount;
    this->amount=amount;
}
void Benefit::set_planType(string PlanType)
{
    this->PlanType=PlanType;
}
string Benefit::get_PlanType()
{
    return PlanType;
}
double Benefit::get_amount()
{
    return amount;
}



