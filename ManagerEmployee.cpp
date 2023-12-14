#include "ManagerEmployee.h"

ManagerEmployee::ManagerEmployee()
{
    //ctor
}

ManagerEmployee::~ManagerEmployee()
{
    //dtor
}

void ManagerEmployee::get_details()
{
    double bonus;
    SalariedEmployee::get_details();
    cout<<"Enter Employee's bonus: ";
    cin>>bonus;
    this->bonus=bonus;
}
double ManagerEmployee::get_bonus()
{
    return bonus;
}
double ManagerEmployee::get_salary()
{
    double sum=get_Salary2()+bonus;
    return sum;
}
void ManagerEmployee::DisplayDetails()
{
    Employee::DisplayDetails();
    cout<<"-->Bonus: "<<bonus
        <<"\n-->Salary: "<<get_salary()
        <<"\n-->Total pay: "<<calculate_pay()<<endl;

}
void ManagerEmployee::add_Bonus(double more_bonus)
{
    bonus+=more_bonus;
}
double  ManagerEmployee::calculate_pay()
{
    double s=0;
    for(int i=0; i<count; i++)
        s+=b[i]->Calculate_Benefit();
    double sum=get_salary()+s;
    return sum;

}

