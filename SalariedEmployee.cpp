#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
    //ctor
}

SalariedEmployee::~SalariedEmployee()
{
    //dtor
}

void SalariedEmployee::get_details()
{
    double Salary;
    Employee::get_details();
    cout<<"Enter Employee's Salary: ";
    cin>>Salary;
    this->Salary=Salary;
}
double SalariedEmployee::get_Salary2()
{
    return Salary;
}
double SalariedEmployee::get_salary()
{
    double salaary=Salary;
    return salaary;
}

void SalariedEmployee::DisplayDetails()
{
    Employee::DisplayDetails();
    cout<<"-->Salary: "<<Salary
        <<"\n-->Total pay: "<<calculate_pay()<<endl;


}
double  SalariedEmployee::calculate_pay()
{
    double s=0;
    for(int i=0; i<count; i++)
        s+=b[i]->Calculate_Benefit();
    double sum=get_salary()+s;
    return sum;

}


